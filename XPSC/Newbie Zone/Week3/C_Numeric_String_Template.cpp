#include <iostream>
#include <map>
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
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        int m;
        cin >> m;
        while(m--)
        {
            string s;
            cin >> s;
            if((int)s.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            map<int, char> ch;
            map<char, int> num;
            bool match = true;

            for(int i=0; i<n; i++)
            {
                int numVal = a[i];
                char c = s[i];

                if((ch.count(numVal) && ch[numVal] != c) || (num.count(c) && num[c] != numVal))
                {
                    match = false;
                    break;
                }

                ch[numVal] = c;
                num[c] = numVal;
            }

            if(match){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }

        }
    }

    return 0;
}
