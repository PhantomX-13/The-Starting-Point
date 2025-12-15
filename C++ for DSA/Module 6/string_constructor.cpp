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
    /* 
    string s = "Hello";
    //1 no way
    string s("Hello");
    // 2 no way
    string s("Hello World", 4);
    // 3 no way
    string s (5,'A');
    */

    string s = "Hello World";
    string t(s,4);
    cout << t << endl;
    return 0;
}
