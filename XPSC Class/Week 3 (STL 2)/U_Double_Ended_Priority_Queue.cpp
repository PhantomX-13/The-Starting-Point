#include<iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    multiset<long long> s;

    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        s.insert(x);
    }

    while(q--)
    {
        int type;
        cin >> type;

        if(type == 0)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }
        else if(type == 1)
        {
            auto it = s.begin();
            cout << *it << '\n';
            s.erase(it);
        }
        else if(type == 2)
        {
            auto it = prev(s.end());
            cout << *it << '\n';
            s.erase(it);
        }
    }

    return 0;
}