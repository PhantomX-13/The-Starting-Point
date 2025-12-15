#include<iostream>
using namespace std;
vector<pair<int,int>> adj_list[105];
int dis[105]; 
//distance arr-> src theke every node e jawar distance ei arr te store kore rakhi

void dijkstra(int src) //time complexity --> O(V*E)
{
    queue<pair<int,int>> q;
    q.push({src,0}); //{src, src distance}
    dis[src] = 0;
    while(!q.empty()) // time complexity--> O(V)
    {
        //q theke ber kore anbo
        pair<int,int> par = q.front();
        q.pop();
        int par_node = par.first;
        int par_dis = par.second;

        //children gulo push kora
        for(auto child : adj_list[par_node]) // time complexity --> O(E)
        {
            int child_node = child.first;
            int child_dis = child.second;

            if(par_dis + child_dis < dis[child_node]) //path relaxation kora jai kina
            {
                dis[child_node] = par_dis + child_dis;
                q.push({child_node, dis[child_node]});
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
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
        dis[i] = INT_MAX; //infinite kore nilam
    dijkstra(0); //assume that 0 is the source
    for(int i=0;i<n;i++)
        cout << i << " -> " << dis[i] << endl;
    return 0;
}

/*
Sample input: 
5 8
0 1 10
1 2 1
0 2 7
0 3 4
2 3 1
3 4 5
1 4 3
2 4 5

Output:
0 -> 0  ---> src theke 0 te jawar shortage distance 0
1 -> 6  ---> src theke 1  e jawar shortage distance 6
2 -> 5  ---> src theke 2 te jawar shortage distance 5
3 -> 4  ---> src theke 3  e jawar shortage distance 4
4 -> 9  ---> src theke 4  e jawar shortage distance 9


*/