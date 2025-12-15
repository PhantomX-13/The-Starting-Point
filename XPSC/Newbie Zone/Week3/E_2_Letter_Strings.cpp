#include <iostream>
#include <map>
#define ll long long
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
        vector<string> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        map<string, int> freq;
        long long ans = 0;

        for(auto s : arr)
        {
            for(char c='a'; c<='k'; c++)
            {
                if(c == s[1])
                    continue;
                string temp = s;
                temp[1] = c;
                if(freq.count(temp))
                    ans += freq[temp];
            }

            for(char c='a'; c<='k'; c++)
            {
                if(c == s[0])
                    continue;
                string temp = s;
                temp[0] = c;
                if(freq.count(temp))
                    ans += freq[temp];
            }

            freq[s]++;
        }

        cout << ans << "\n";
    }
    return 0;
}