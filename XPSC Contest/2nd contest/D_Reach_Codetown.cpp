#include <iostream>
using namespace std;

bool isVowel(char c)
{
    return(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        string target = "CODETOWN";
        bool canReach = true;

        for(int i=0; i<8; i++)
        {
            if(isVowel(s[i]) != isVowel(target[i]))
            {
                canReach = false;
                break;
            }
        }

        if(canReach)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}