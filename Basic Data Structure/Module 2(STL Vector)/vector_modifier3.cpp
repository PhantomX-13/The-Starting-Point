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
    vector<int> v = {1,2,3,4};

    //v.insert(position, value)
    //v.insert(v.begin()+2,v2.begin(), v2.end());  //concept isn't clear
    
    //replace(v.begin(),v.end(),2,100);

    //vector<int>:: iterator it = find(v.begin(), v.end(),100);
    auto it = find(v.begin(), v.end(),100);
    if(it == v.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "found";
    }
    return 0;
}
