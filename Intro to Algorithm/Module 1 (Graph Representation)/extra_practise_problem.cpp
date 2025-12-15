#include <iostream>
using namespace std;

int main()
{
    int n,e;
    cin >> n >> e;
    int adj_mat[n][n];

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; i<n; j++)
    //     {
    //         adj_mat[i][j] = 0; //whole adjancy matrix 0 kore deya hyse
    //     }
    // }

    memset(adj_mat,0,sizeof(adj_mat)); //shortcut , eta memory set kore dey
    // memset( kar memory rkhte chai, value, sbgula te rakhte chaile sizeof(specific matrix like adj_mat));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            if(i==j)
                adj_mat [i][j] = 1;
    }

    for(int i=0; i<e; i++)
    {
        int a,b;
        cin >> a >> b;
        adj_mat[a][b] = 1; //a row & b column 1 kore dibo
        adj_mat[b][a] = 1; //b row & a column 1 kore dibo & this is only for undirected graph
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

/*
Input: 
7 10
1 5
1 2
2 3
2 4
2 5
3 4
3 6
4 5
4 6
5 6
*/
