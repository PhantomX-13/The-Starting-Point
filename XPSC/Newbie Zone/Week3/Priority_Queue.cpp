#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<priority_queue<int>> pq(n);

    while(q--)
    {
        int tp, t;
        cin >> tp >> t;

        if(tp == 0)
        {
            int x;
            cin >> x;
            pq[t].push(x);
        }
        else if(tp == 1)
        {
            if(!pq[t].empty())
                cout << pq[t].top() << '\n';
        }
        else{
            if(!pq[t].empty())
                pq[t].pop();
        }
    }

    return 0;
}