#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

char grid[105][105];
bool vis[105][105];
int n,m;
vector<pair<int,int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool valid(int i,int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

bool bfs(int si, int sj, int di, int dj)
{
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while(!q.empty())
    {
        auto par = q.front();
        q.pop();
        int i = par.first;
        int j = par.second;

        if(i == di && j == dj) return true;

        for(auto dir : d)
        {
            int ni = i + dir.first;
            int nj = j + dir.second;

            if(valid(ni, nj) && !vis[ni][nj] && (grid[ni][nj] == '.' || grid[ni][nj] == 'B'))
            {
                vis[ni][nj] = true;
                q.push({ni, nj});
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'A')
            {
                si = i; sj = j;
            }
            else if(grid[i][j] == 'B')
            {
                di = i; dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    if(bfs(si, sj, di, dj))
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
