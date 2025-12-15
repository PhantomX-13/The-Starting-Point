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
    for(int i=0; i<n; i++) //O(N)
    {
        for(int j=0;j<n;j++) //O(N)
        {
            cout << "Hello" << endl;
        }       
    }
    return 0;
}

// total complexity O(N*N)

// duita loop nested thakle multiply hy
// duita loop alada thakle sum hy
