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
    // vector<int> v;     --> type 1
    // vector<int> v(10); --> type 2

    // vector<int> v(10,-1); --> type 3
    // for(int i=0; i <v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> v(10,-1); --> type 4
    // vector<int> v2(v);
    // for(int i=0; i <v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // vector<int> v = {1,2,3,4};  --> type 6

    
    int a[5] = {1,2,3,4,5};  // type 5
    vector<int> v(a,a+5);
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
