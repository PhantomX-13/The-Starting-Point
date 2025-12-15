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
    for(int i=0; i < n; i++){
        cin >> a[i];
    }
    //sort(a, a+n);  //assending
    sort(a, a+n, greater<int>()); //descending
    for(int i=0; i < n; i++){
        cout << a[i] << " ";
    }

    
    return 0;
}
