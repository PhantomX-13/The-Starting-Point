#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int n,m;
vector<string> grid;
bool vis[1005][1005];

vector<pair<int,int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool valid(int i, int j)
{
    return(i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.' && !vis[i][j]);
}

void dfs(int i, int j)
{
    vis[i][j] = true;
    for (auto dir : d)
    {
        int ni = i + dir.first;
        int nj = j + dir.second;
        if(valid(ni, nj))
        {
            dfs(ni, nj);
        }
    }
}

int main()
{
    cin >> n >> m;
    grid.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    memset(vis, false, sizeof(vis));

    int apartments = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                apartments++;
            }
        }
    }

    cout << apartments << endl;
    return 0;
}
