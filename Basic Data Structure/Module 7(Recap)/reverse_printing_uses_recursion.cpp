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

void rec(int i, int n)
{
    //base case(recursion kothay jeye thambe)
    if(i > n)
    {
        return;
    }
    //cout << i << endl;
    rec(i+1,n);
    cout << i << endl;
}
int main()
{
    int n = 5;
    rec(1,n);
    return 0;
}
