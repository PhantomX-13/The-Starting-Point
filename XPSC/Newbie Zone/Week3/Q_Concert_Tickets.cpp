#include <iostream>
#include <set>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    multiset<int> tkt;
    for(int i=0; i<n; i++)
    {
        int price;
        cin >> price;
        tkt.insert(price);
    }
    
    for(int i=0; i<m; i++)
    {
        int cus;
        cin >> cus;

        auto it = tkt.upper_bound(cus);

        if(it == tkt.begin())
        {
            cout << -1 << '\n';
        }
        else{
            it--;
            cout << *it << '\n';
            tkt.erase(it);
        }
    }
    return 0;
}