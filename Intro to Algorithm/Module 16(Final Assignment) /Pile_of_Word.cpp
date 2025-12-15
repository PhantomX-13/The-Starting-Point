#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if(s1.length() != s2.length())
        {
            cout << "NO\n";
            continue;
        }

        int freq[26] = {0};

        for(char c : s1)
            freq[c - 'a']++;

        for(char c : s2)
            freq[c - 'a']--;

        bool isPile = true;
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            {
                isPile = false;
                break;
            }
        }

        if(isPile) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}
