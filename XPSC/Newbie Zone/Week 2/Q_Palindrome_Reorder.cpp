#include <iostream>
#include <map>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> cnt;
    for(int i=0; i<s.size(); i++)
        cnt[s[i]]++;

    int num_of_odd_fre = 0;
    char ch;

    string ans;
    for(auto [c, f] : cnt)
    {
        if(f%2 == 1)
        {
            num_of_odd_fre++;
            ch = c;
        }
        for(int i=1; i<= f/2; i++)
            ans.push_back(c);
    }

    if(num_of_odd_fre == 0)
    {
        cout << ans;
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    } 
    else if(num_of_odd_fre == 1)
    {
        cout << ans << ch;
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    } 
    else
    {
        cout << "NO SOLUTION\n";
    }
    
    return 0;
}