#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int adj_mat[n][n]; 
    memset(adj_mat, 0, sizeof(adj_mat));

    for(int i = 0; i < n; i++)
    {
        adj_mat[i][i] = 1;
    }

    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    int q;
    cin >> q;
    while(q--)
    {
        int u, v;
        cin >> u >> v;
        if(adj_mat[u][v] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
