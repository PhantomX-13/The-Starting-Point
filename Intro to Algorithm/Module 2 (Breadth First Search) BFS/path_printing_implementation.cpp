#include <iostream>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005]; //ques onujayi size nibo
int level[1005];
int parent[1005];

void bfs(int src_node)
{
    queue<int> q;
    q.push(src_node);
    visited[src_node] = true;
    level[src_node] = 0;
    while(!q.empty()) //O(V)
    {
        int par = q.front();
        q.pop();

        for(int child : adj_list[par]) //O(E)
        {
            if(visited[child] == false)
            {
                q.push(child);
                visited[child] = true; 
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}
int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int src, des;
    cin >> src >> des;
    bfs(src);

    vector<int> path;
    int node = des;

    while(node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    cout << "Shortest Path: ";
    for(int x : path)
    {
        cout << x << " ";
    }
    return 0;
}

//time complexity : O (V+E) --> Vertices, Edges
//space complexity : O (V) --> Vertices