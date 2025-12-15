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
    int n;        //O(1)
    cin >> n;
    int a[n];     //O(N) -> space complexity
    //memory te kototuku jayga nissi it's depend on input , so order of N

    for(int i=0;i<n;i++) //O(N) -> time complexity ; O(1) -> space complexity
    {
        cin >> a[i];
    }

    return 0;
}
