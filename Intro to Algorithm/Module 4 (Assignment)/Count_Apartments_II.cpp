#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char grid[105][105];
bool vis[105][105];
int n, m;
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int dfs(int i, int j)
{
    vis[i][j] = true;
    int cnt = 1; 
    for(auto dir : d)
    {
        int ni = i + dir.first;
        int nj = j + dir.second;
        if(valid(ni, nj) && !vis[ni][nj] && grid[ni][nj] == '.')
        {
            cnt += dfs(ni, nj);
        }
    }
    return cnt;
}

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        string row;
        cin >> row; 
        for(int j = 0; j < m; j++)
        {
            grid[i][j] = row[j];
            vis[i][j] = false;
        }
    }

    vector<int> apartment;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == '.' && !vis[i][j])
            {
                int room = dfs(i, j);
                apartment.push_back(room);
            }
        }
    }

    if(apartment.empty())
    {
        cout << 0 << endl;
    }
    else{
        sort(apartment.begin(), apartment.end());
        for(int i = 0; i < (int)apartment.size(); i++)
        {
            cout << apartment[i];
            if(i != (int)apartment.size() - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
