#include <iostream>
using namespace std;

vector<int> adj[1005];
bool visited[1005];
int level[1005];

void bfs(int src) {
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int L;
    cin >> L;

    bfs(0); // source always 0

    vector<int> nodes;
    for (int i = 0; i < n; i++) {
        if (level[i] == L) {
            nodes.push_back(i);
        }
    }

    if (nodes.empty()) {
        cout << " " << endl; // no nodes at this level
    } else {
        sort(nodes.rbegin(), nodes.rend()); // descending order
        for (int x : nodes) cout << x << " ";
        cout << endl;
    }

    return 0;
}
