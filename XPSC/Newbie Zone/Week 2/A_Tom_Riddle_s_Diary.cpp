#include <iostream>
#include <set>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;
    set<string> name;
    for(int i=1; i<=n; i++)
    {
        string a;
        cin >> a;
        if(name.find(a) == name.end())
        {
            cout << "NO" << '\n';
            name.insert(a);
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
    return 0;
}
