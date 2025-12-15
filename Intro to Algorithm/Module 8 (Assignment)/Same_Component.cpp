#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m) return false;
    if(grid[i][j] == '-') return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for(int i=0; i<4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj])
            dfs(ci,cj);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        string row;
        cin >> row;
        for(int j=0;j<m;j++)
            grid[i][j] = row[j];
    }

    int si, sj, ei, ej;
    cin >> si >> sj;
    cin >> ei >> ej;

    if(grid[si][sj] == '-' || grid[ei][ej] == '-')
    {
        cout << "NO\n";
        return 0;
    }

    memset(vis,false,sizeof(vis));

    dfs(si,sj);

    if(vis[ei][ej]) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
