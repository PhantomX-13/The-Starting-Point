#include<iostream>
using namespace std;
vector<int> adj_list[1005]; //globally
bool vis[1005];

void dfs(int src)
{
    //print kore deya
    cout << src << " ";
    //src visited ta true kore deya
    vis[src] = true;
    for(int child : adj_list[src])
        if(!vis[child]) //if child is not visited
            
            dfs(child); //recursion call hsse
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
    memset(vis,false,sizeof(vis)); //visited arr sb value false kore deya
    dfs(0);
    return 0;
}