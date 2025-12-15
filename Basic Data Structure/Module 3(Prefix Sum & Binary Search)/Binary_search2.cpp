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
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;
    int flag = 0;

    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]==val)
    //     {
    //         flag = 1;
    //     }
    // }

    int L=0;
    int R= n-1;
    while(L <= R)
    {
        int mid = (L+R)/2;
        if(a[mid]==val)
        {
            flag = 1;
            break;
        }
        else if(a[mid] > val)
        {
            R = mid-1;
        }
        else{
            L = mid+1;
        }
    }
    if(flag == 1)
    {
        cout << "Found\n";
    }
    else{
        cout << "Not found\n";
    }
    return 0;
}
