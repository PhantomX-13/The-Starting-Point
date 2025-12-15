#include <iostream>
using namespace std;

int prices[205];
int n;
int dp[205][200005]; /* dp[i][s] → DP table, বোঝাচ্ছে: প্রথম i টা item ব্যবহার করে কি আমরা sum s বানাতে পারি?
                    (Yes হলে 1, No হলে 0, -1 হলে not calculated) */

int canForm(int i, int s)
{
    if(s < 0)    //যদি sum negative হয়ে যায় → impossible
        return 0;
    if(i < 0)   //যদি কোন item না থাকে (i < 0)
    {
        if(s == 0) return 1;    //শুধু sum = 0 হলে সম্ভব (empty set)
        else return 0;      //অন্য sum হলে অসম্ভব।
    }
    if(dp[i][s] != -1)      //আগের থেকে calculate করা থাকলে, direct return সেই answer ফেরত দিচ্ছে।
        return dp[i][s];
    int included = canForm(i-1, s - prices[i]);     //item i নিলাম → তখন sum কমবে prices[i], কারণ item i নিলে তার price বাদ দিতে হবে
    int excluded = canForm(i-1, s);     //item i নিলাম না।

    if(included || excluded) //যদি কোনো একটা condition true হয়, হয়তো item i ব্যবহার করে sum তৈরি সম্ভব অথবা item i বাদ দিয়েও sum তৈরি সম্ভব
        dp[i][s] = 1;
    else                //যদি দুটোই false হয়, মানে item i ব্যবহার করেও sum তৈরি সম্ভব না, item i বাদ দিলেও sum তৈরি সম্ভব না, তাহলে sum s অসম্ভব।
        dp[i][s] = 0;

    return dp[i][s];    //যেটা DP টেবিলে store করলো, সেটা return করছে যাতে উপরের recursive call সেটা ব্যবহার করতে পারে।
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    int total_sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> prices[i];
        total_sum += prices[i];     //সবগুলোর sum যোগ করছে → total_sum (maximum possible subset sum), কারণ maximum subset sum কখনোই total_sum এর বেশি হবে না।
    }
    for(int i=0; i<=n; i++)
        for(int j=0; j<=total_sum; j++)
            dp[i][j] = -1;      // DP table initialize → সবখানে -1 (not calculated)।

    for(int s=0; s<=total_sum; s++)     //সব possible sum (0 থেকে total_sum পর্যন্ত) check করা হচ্ছে।
        canForm(n-1, s);        // canForm(n-1, s) → মানে "সব item ব্যবহার করে sum s বানানো যাবে কি না"

    vector<int>prefix (total_sum+5, 0);     //Prefix array বানানো হচ্ছে।
        prefix[0] = 0;             //prefix[s] মানে → কতগুলো distinct sum আছে 0..s এর মধ্যে।

    for(int s=1; s<=total_sum; s++)     
    {
        prefix[s] = prefix[s-1];    //prefix[s] = prefix[s-1] (আগের মান inherit করে)।
        if(dp[n-1][s])  // যদি sum s কোন subset থেকে possible হয়, সেটা একবারই গণনা হবে ***
            prefix[s] += 1;     //যদি sum s possible হয় → count বাড়াও
            
            //ekhane শুধু ১ বার count করা হচ্ছে, ফলে duplicate sum আবার গণনা হয় না। ***
    }

    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        if(l > total_sum)       //যদি L > maximum possible sum → কোনো subset sum আসতে পারে না → answer = 0।
        {
            cout << 0 << '\n';
            continue;
        }
        if(r > total_sum)
            r = total_sum;

        int ans = prefix[r];
        if(l > 0)  
            ans -= prefix[l-1];     //Query এর উত্তর বের করা হচ্ছে → prefix[r] - prefix[l-1]।
        cout << ans << '\n';
    }

    return 0;
}
