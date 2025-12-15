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
    int n;  //O(1)
    cin >> n; //O(1) order of 1

    for(int i=1; i<=n; i+=2) //O(n/2) bt we ignore constant, O(n)
    {
        cout << i << " ";
    }
    cout << endl; //O(1)
     for(int i=1; i<=n; i++)  //O(n)
    {
        cout << i << " ";
    }
    return 0;  //O(1)
}

//total complexity  O(n+n+1+1+1+1) 
//Total COmplexity = O(2n) = O(n)
