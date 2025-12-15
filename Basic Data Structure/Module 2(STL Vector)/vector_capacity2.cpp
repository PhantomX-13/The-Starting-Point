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
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.resize(7,100);
    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[2] << endl;

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;


}
