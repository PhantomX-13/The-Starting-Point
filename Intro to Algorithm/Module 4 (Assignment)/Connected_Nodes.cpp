#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n];

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // undirected
    }

    int q;
    cin >> q;
    while(q--)
    {
        int node;
        cin >> node;

        if(adj_list[node].empty())
        {
            cout << -1 << "\n";
        }
        else
        {
            sort(adj_list[node].begin(), adj_list[node].end(), greater<int>());

            for(int x : adj_list[node])
                cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}
