#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
#include <queue>
using namespace std;

int N, M;
int Ki, Kj, Qi, Qj;
bool visited[105][105];
int levelArr[105][105];

vector<pair<int,int>> m = {{2,1}, {2,-1}, {-2,1}, {-2,-1},{1,2}, {1,-2}, {-1,2}, {-1,-2}};

bool valid(int x,int y)
{
    return(x >= 0 && x < N && y >= 0 && y < M);
}

int bfs(int sx, int sy)
{
    memset(visited, false, sizeof(visited));
    memset(levelArr, -1, sizeof(levelArr));

    queue<pair<int,int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    levelArr[sx][sy] = 0;

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;
        if(x == Qi && y == Qj) 
            return levelArr[x][y];

        for(auto d : m)
        {
            int nx = x + d.first;
            int ny = y + d.second;

            if(valid(nx, ny) && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                levelArr[nx][ny] = levelArr[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    return -1;
}

int main()
{
    int T; 
    cin >> T;
    while(T--)
    {
        cin >> N >> M;
        cin >> Ki >> Kj;
        cin >> Qi >> Qj;
        cout << bfs(Ki, Kj) << "\n";
    }
    return 0;
}
