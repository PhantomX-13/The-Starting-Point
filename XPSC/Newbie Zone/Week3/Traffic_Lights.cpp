#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    int n;
    cin >> x >> n;

    set<long long> pos;
    multiset<long long> len;

    // Initially lights at 0 and x
    pos.insert(0);
    pos.insert(x);

    len.insert(x - 0);

    while(n--)
    {
        long long p;
        cin >> p;

        // find nearest right light
        auto it = pos.upper_bound(p);
        long long right = *it;
        long long left = *prev(it);

        // remove old interval
        len.erase(len.find(right - left));

        // insert new intervals
        len.insert(p - left);
        len.insert(right - p);

        // add light
        pos.insert(p);

        // largest interval
        cout << *len.rbegin() << " ";
    }
}
