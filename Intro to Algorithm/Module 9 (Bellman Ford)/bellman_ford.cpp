#include <iostream>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c) //constructor
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int dis[1005];
vector<Edge> edge_list;
int n, e;

void bellman_ford() //Total complexity: O(VE)
{
    for (int i = 0; i < n - 1; i++) //O(V)
    {
        for (auto ed : edge_list) //O(E)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != INT_MAX && dis[a] + c < dis[b]) //a/1st node kokhnoi infinite houa jbena
                dis[b] = dis[a] + c;
        }
    }
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
        // edge_list.push_back(Edge(b,a,c)); undirected
    }
    for (int i = 0; i < n; i++) //cz INT_MAX er jnno memset func properly kaj korena
        dis[i] = INT_MAX;
    dis[0] = 0; //source value

    bellman_ford();

    for (int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;
    return 0;
}

/*
Sample input: 
4 4
0 2 5
0 3 12
2 1 2
1 3 3

Output: 
0 -> 0
1 -> 7
2 -> 5
3 -> 10

As this complexity is O(VE) ja dijkstra er thekeo kharap
bt thekay pore gele bellman ford hisebe code krte hbe
*/