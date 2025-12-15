#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    set<char> str(s.begin(), s.end());
    bool found = false;

    for(char c='a'; c<='z'; c++)
    {
        if(str.find(c) == str.end())
        {
            cout << c << '\n';
            found = true;
            break;
        }
    }
    if(!found)
        cout << "None\n";
    return 0;
}
