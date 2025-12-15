#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int l = 0, r = n-1, ans = n;
        while(l <= r)
        {
            if(s[l] == s[r])
            {
                break;
            }
            else{
                ans -= 2;
                l++, r--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

//https://codeforces.com/problemset/problem/1791/C