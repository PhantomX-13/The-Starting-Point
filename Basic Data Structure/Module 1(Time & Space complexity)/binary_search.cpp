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
    int n,q;
    cin >> n >> q;
    int a[n];
    for(int i=0; i<n; i++)      //O(N)
    {
        cin >> a[i];
    }
    for(int i=0; i <q; i++)    //O(Q)
    {
        int x;
        cin >> x;
        int flag = 0;
        for(int i=0; i<n;i++)   //O(N)
        {
            if(a[i]==x)
            {
                flag = 1;
            }
        }
        if(flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}

//total: O(N) + O(Q*N) 
//       (Q*N) ; bcz we have to take worst one
