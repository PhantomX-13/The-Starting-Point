#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    string s;
    cin >> s;

    for(char c : s)
    {
        if(isupper(c))
            cout << c;
    }

    cout << '\n';
    return 0;
}

// https://vjudge.net/contest/753864#problem/N