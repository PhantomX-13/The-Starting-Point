#include <iostream>
using namespace std;

vector<int> adj_list[1005];  // adjacency list globally
bool visited[1005];
int dist[1005]; // distance array

int bfs(int src_node, int dest_node, int n) {
    memset(visited, false, sizeof(visited));
    memset(dist, -1, sizeof(dist)); // -1 means not reachable

    queue<int> q;
    q.push(src_node);
    visited[src_node] = true;
    dist[src_node] = 0;

    while (!q.empty()) {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par]) {
            if (!visited[child]) {
                visited[child] = true;
                dist[child] = dist[par] + 1;
                q.push(child);

                if (child == dest_node) {
                    return dist[child]; // shortest path পাওয়া গেছে
                }
            }
        }
    }
    return -1; // কোনো path নেই
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // undirected
    }

    int q;
    cin >> q;
    while (q--) {
        int s, d;
        cin >> s >> d;
        cout << bfs(s, d, n) << "\n";
    }

    return 0;
}

// Time complexity: O(V + E) for each BFS
// Space complexity: O(V)
