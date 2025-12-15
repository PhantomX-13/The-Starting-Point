#include <iostream>
#include <map>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;

    map<string, int> db;

    for(int i=0; i<n; i++)
    {
        string name;
        cin >> name;

        if(db[name] == 0)
        {
            cout << "OK" << '\n';
            db[name] = 1;
        } 
        else
        {
            cout << name << db[name] << '\n';
            db[name]++;
        }
    }
    return 0;
}
