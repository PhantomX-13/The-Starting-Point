#include <iostream>
#include <map>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    map<string, int> freq;

    for(int i=0; i< n-1; i++)
    {
        string t = s.substr(i, 2);
        freq[t]++;
    }

    string ans;
    int maxCount = 0;
    for(auto [key, val] : freq)
    {
        if(val > maxCount)
        {
            maxCount = val;
            ans = key;
        }
    }

    cout << ans;
    return 0;
}