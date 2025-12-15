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
    vector<int> v2 = {200,300,400};

    //v.insert(position, value)
    v.insert(v.begin()+2,v2.begin(), v2.end());  //concept isn't clear
    //v.insert(v.begin()+2, 100);

    //v.erase(v.begin()+2);
    //v.erase(v.begin()+1, v.begin()+5) --> for dlt multiply value

    for(int x : v)
    {
        cout << x << " ";
    }
    return 0;
}
