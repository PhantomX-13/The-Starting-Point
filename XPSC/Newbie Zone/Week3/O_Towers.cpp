#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    multiset<int> towers;  // stores tops of towers

    for(int i=0; i<n; i++)
    {
        int cube;
        cin >> cube;

        // find tower with top > cube
        auto it = towers.upper_bound(cube);

        if(it != towers.end())
        {
            // place on this tower (remove old top, add new top)
            towers.erase(it);
        }
        // start/update tower with new top
        towers.insert(cube);
    }

    // number of towers = size of multiset
    cout << towers.size() << '\n';
    return 0;
}