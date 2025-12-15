#include <iostream>
using namespace std;

vector<int> adj_list[1005]; //adj_list bfs func eo lagbe tai main func e na rekhe globally niye rakhsi
bool visited[1005]; //ques onujayi size nibo

void bfs(int src_node)
{
    queue<int> q;
    q.push(src_node);
    visited[src_node] = true; //visited arr jekhane pabo ogula tru kore dibo

    while(!q.empty()) //O(V)
    {
        //ber kore ana
        int par = q.front();
        q.pop();

        //oi node ke niye kaj
        cout << par << " ";

        //children gulo push kora
        for(int child : adj_list[par]) //O(E)
        {
            if(visited[child] == false)
            {
                q.push(child);
                visited[child] = true; 
            }
        }
    }
    cout << endl;
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
    memset(visited, false, sizeof(visited)); //memory set er maddhome visited array sb false kore dilam
    int src, des;
    cin >> src >> des;
    bfs(src);

    if(visited[des])
        cout << "Yes\n";
    else 
        cout << "No\n";
    return 0;
}

//time complexity : O (V+E) --> Vertices, Edges
//space complexity : O (V) --> Vertices