#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    set<int> s(a.begin(), a.end());
    int ops = 0;

    for(int i=0; i<x; i++)
    {
        if(s.find(i) == s.end())
            ops++;
    }

    if(s.find(x) != s.end())
        ops++;

    cout << ops << "\n";
    return 0;
}
