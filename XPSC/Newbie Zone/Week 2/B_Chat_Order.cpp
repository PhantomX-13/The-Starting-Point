#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> names(n);
    for(int i=0; i<n; i++)
        cin >> names[i];

    unordered_set<string> seen;
    vector<string> rslt;

    for(int i= n-1; i>=0; i--)
    {
        if(!seen.count(names[i]))
        {
            seen.insert(names[i]);
            rslt.push_back(names[i]);
        }
    }

    for(string name : rslt)
        cout << name << '\n';

    return 0;
}