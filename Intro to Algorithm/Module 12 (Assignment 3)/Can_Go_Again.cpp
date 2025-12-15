#include <iostream>
#include <vector>
using namespace std;

class Edge
{
    public:
        int u, v;
        long long w;
        Edge(int u, int v, long long w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

vector<Edge> edges;
vector<long long> dist;
int n, m;

bool bellman_ford(int source)
{
    dist.assign(n + 1, LLONG_MAX);
    dist[source] = 0;

    for(int i = 1; i <= n - 1; i++) {
        for(auto ed : edges) {
            int u = ed.u;
            int v = ed.v;
            long long w = ed.w;
            if(dist[u] != LLONG_MAX && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    for(auto ed : edges)
    {
        int u = ed.u;
        int v = ed.v;
        long long w = ed.w;
        if(dist[u] != LLONG_MAX && dist[u] + w < dist[v])
            return true;
    }

    return false;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }

    int source;
    cin >> source;

    if(bellman_ford(source))
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int t;
    cin >> t;
    while(t--)
    {
        int dest;
        cin >> dest;
        if(dist[dest] == LLONG_MAX)
            cout << "Not Possible" << endl;
        else
            cout << dist[dest] << endl;
    }

    return 0;
}
