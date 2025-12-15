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
int* sort_it(int n){

    int* a = new int[n]; 
    for(int i = 0; i < n; i++){
        cin >> a[i];     
    }
    sort(a, a+n, greater<int>());  
    return a;
}
int main()
{
   int n;
   cin >> n;
   int* A = sort_it(n); 

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
