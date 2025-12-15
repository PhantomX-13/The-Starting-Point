#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
pair<int,int> parent[1005][1005];

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> grid[i][j];

    int si= -1, sj= -1;
    int ei= -1, ej= -1;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='R') 
                { si=i; sj=j; }
            if(grid[i][j]=='D') 
                { ei=i; ej=j; }
        }

    memset(vis,false,sizeof(vis));
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1,-1};

    bool found = false;

    while(!q.empty())
    {
        auto[x,y] = q.front();
        q.pop();
        if(x==ei && y==ej)
        { 
            found=true;
            break; 
        }

        for(auto &dir : d)
        {
            int nx = x + dir.first;
            int ny = y + dir.second;

            if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && (grid[nx][ny]=='.' || grid[nx][ny]=='D'))
            {
                vis[nx][ny]=true;
                parent[nx][ny]={x,y};
                q.push({nx,ny});
            }
        }
    }

    if(found)
    {
        int x = ei;
        int y = ej;

        while(parent[x][y].first!= -1)
        {
            int px=parent[x][y].first;
            int py=parent[x][y].second;
            
            if(grid[px][py]!='R') 
                grid[px][py]='X';
                    x=px;
                    y=py;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<grid[i][j];
            
        cout<<"\n";
    }

    return 0;
}
