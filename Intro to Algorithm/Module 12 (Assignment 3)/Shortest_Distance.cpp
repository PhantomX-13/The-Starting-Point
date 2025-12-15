#include <iostream>
using namespace std;

int main()
{
    int n, e, q;
    cin >> n >> e;
    long long adj[n+5][n+5];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = LLONG_MAX;
        }
    }

    while(e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        adj[a][b] = min(adj[a][b], w);
    }

    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(adj[i][k]!=LLONG_MAX && adj[k][j]!= LLONG_MAX){
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    cin >> q;
    while(q--)
    {
        int x, y;
        cin >> x >> y;
        if(adj[x][y] == LLONG_MAX) cout << -1 << endl;
        else cout << adj[x][y] << endl;
    }

    return 0;
}
