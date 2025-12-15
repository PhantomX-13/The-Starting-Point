#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    string s;
    cin >> s;

    bool found = false;

    for(int i=0; i < s.length()- 1; i++)
    {
        if(s[i]=='s' && s[i+1]=='s')
        {
            found = true;
            break;
        }
    }

    if(found)
        cout << "hiss";
    else
        cout << "no hiss";
    return 0;
}
