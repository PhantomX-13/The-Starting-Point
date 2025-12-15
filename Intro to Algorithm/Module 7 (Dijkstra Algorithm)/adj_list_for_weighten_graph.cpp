#include<iostream>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> adj_list[n];
    while(e--)
    {
        int a,b,c;
        cin >> a >> b >> c; //a theke b te jawar cost c
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
    {
        cout << i << " -> ";
        for(auto p : adj_list[i])
            cout << p.first << " " << p.second << ", ";
        cout << endl;
    }
    return 0;
}

/*
Sample input: 
5 8
0 1 10 -> 0 theke 1 e jawa jai 10 way te
1 2 1  -> 1 theke 2 e jawa jai  1 way te
0 2 7  -> 0 theke 2 e jawa jai  7 way te
0 3 4  -> 0 theke 3 e jawa jai  4 way te
2 3 1  -> 2 theke 3 e jawa jai  1 way te
3 4 5  -> 3 theke 4 e jawa jai  5 way te
1 4 3  -> 1 theke 4 e jawa jai  3 way te
2 4 5  -> 2 theke 4 e jawa jai  5 way te

Output: 
0 -> 1 10, 2 7, 3 4, 
1 -> 0 10, 2 1, 4 3, 
2 -> 1 1, 0 7, 3 1, 4 5, 
3 -> 0 4, 2 1, 4 5, 
4 -> 3 5, 1 3, 2 5, 


*/