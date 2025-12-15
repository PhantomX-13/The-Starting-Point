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

int* fun(){
    int* a = new int[5];
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    return a;
}
int main()
{
    int* x = fun ();
     for(int i=0; i<5; i++){
        cout << x[i] << " ";
    }
    return 0;
}

//static array func theke return hle delete hye jai 
// bt dynamic array dlt hyna
