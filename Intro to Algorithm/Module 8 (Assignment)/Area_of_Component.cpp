#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m) return false;
    if(grid[i][j] == '-') return false;
    return true;
}

int dfs(int si, int sj) {
    vis[si][sj] = true;
    int area = 1;
    for(int k=0; k<4; k++)
    {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;
        if(valid(ci,cj) && !vis[ci][cj])
        {
            area += dfs(ci,cj);
        }
    }
    return area;
}

int main(){
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        string row;
        cin >> row;
        for(int j=0;j<m;j++)
        {
            if(j < row.length())
                grid[i][j] = row[j];
            else
                grid[i][j] = '-';
        }
    }

    memset(vis, false, sizeof(vis));

    int minArea = INT_MAX;
    bool found = false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j] == '.' && !vis[i][j])
            {
                int comSize = dfs(i,j);
                minArea = min(minArea, comSize);
                found = true;
            }
        }
    }

    if(!found) cout << -1 << "\n";
    else cout << minArea << "\n";

    return 0;
}