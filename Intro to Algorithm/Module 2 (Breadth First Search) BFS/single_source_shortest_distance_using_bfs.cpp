#include <iostream>
using namespace std;

vector<int> adj_list[1005]; //adj_list bfs func eo lagbe tai main func e na rekhe globally niye rakhsi
bool visited[1005]; //ques onujayi size nibo
int level[1005];

void bfs(int src_node)
{
    queue<int> q;
    q.push(src_node);
    visited[src_node] = true; //visited arr jekhane pabo ogula tru kore dibo
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
    memset(visited, false, sizeof(visited)); //memory set er maddhome visited array sb false kore dilam
    memset(level, -1, sizeof(level)); //-1 ashle oi destination e jawa jaina, althought connected na

    int src, des;
    cin >> src >> des;
    bfs(src);

    // for(int i=0; i<n; i++)
    // {
    //     cout << i << " -> " << level[i] << endl;
    // }

    cout << level[des] << '\n';
    return 0;
}

//time complexity : O (V+E) --> Vertices, Edges
//space complexity : O (V) --> Vertices

/*
Sample input 1: 
7 8
0 1
1 3
3 2
1 4
3 5
2 5
5 6
4 6
0
4
Output : 2

Sample input 2:
7 8
0 1
1 3
3 2
1 4
3 5
2 5
5 6
4 6
0
6
Output: 3
*/