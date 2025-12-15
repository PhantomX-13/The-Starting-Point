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
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int flag =0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i] == v[i+1])
        {
            flag = 1;
        }
    }
    if(flag==0)
    {
        cout <<"NO" << endl;
    }
    else{
        cout <<"YES" << endl;
    }
    return 0;
}
