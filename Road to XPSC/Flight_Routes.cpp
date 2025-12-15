#include <iostream>
using namespace std;
vector<pair<int, int>> adj_list[100005];
vector<long long int> dis[100005];
// int dis[100005][15];
int n, e, k;
void dijkstra(int src)
{
    priority_queue<pair<long long int, int>, vector<pair<long long int, int>>, greater<pair<long long int, int>>> pq;
    pq.push({0, src});
    dis[src][0] = 0;

    while (!pq.empty())
    {
        pair<long long int, int> par = pq.top();
        pq.pop();
        int par_node = par.second;
        long long int par_dis = par.first;

        if (dis[par_node][k - 1] < par_dis)
        {
            continue;
        }

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;

            if (par_dis + child_dis < dis[child_node][k - 1])
            {
                dis[child_node][k - 1] = par_dis + child_dis;
                pq.push({dis[child_node][k - 1], child_node});
                sort(dis[child_node].begin(), dis[child_node].end());
            }
        }
    }
}

int main()
{

    cin >> n >> e >> k;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        // adj_list[b].push_back({a, c});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i].resize(k);
        for (int j = 0; j < k; j++)
        {
            dis[i][j] = 1e18;
        }
    }

    dijkstra(1);
    for (long long int ele : dis[n])
    {
        cout << ele << " ";
    }
    return 0;
}