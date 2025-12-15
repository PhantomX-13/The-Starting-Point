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
 
    for(int i=1; i<= n; i*=2) //O(N)
    {
        cout << i << endl;
    }
    return 0;
}


/* increment jdi multiple akare bare or decrement jdi division hye kome 
then amra etake logarithmic complexity bolte parbo */

// + , - hole seta linear complexity