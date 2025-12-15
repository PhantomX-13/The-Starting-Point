#include <iostream>
using namespace std;

const int MAXN = 1e5 + 5;
int par[1000005];
int grp_size[1000005];

int find(int node)
{
    if(par[node] == -1) 
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int u, int v) {
    int leaderU = find(u);
    int leaderV = find(v);
    // if (leaderU == leaderV) 
    //     return;

    if(grp_size[leaderU] >= grp_size[leaderV])
    {
        par[leaderV] = leaderU;
        grp_size[leaderU] += grp_size[leaderV];
    } 
    else
    {
        par[leaderU] = leaderV;
        grp_size[leaderV] += grp_size[leaderU];
    }
}

int main() {

    int n, e;
    cin >> n >> e;

    // Initialize DSU
    memset(par, -1, sizeof(par));
    memset(grp_size,1, sizeof(grp_size));
    //fill(grp_size, grp_size + n + 1, 1);

    int cycleEdges = 0;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        int leaderU = find(u);
        int leaderV = find(v);

        if(leaderU == leaderV)
        {
            cycleEdges++;
        }
        else
        {
            dsu_union(u, v);
        }
    }

    cout << cycleEdges << "\n";
    return 0;
}
