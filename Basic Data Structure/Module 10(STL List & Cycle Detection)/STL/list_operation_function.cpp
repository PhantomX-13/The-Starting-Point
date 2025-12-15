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
    list<int> l = {20,30,60,10,70,50,60,70,30};
    //l.remove(10);

    //l.reverse();

    l.sort(); //ascending order e
    //l.sort(greater<int>()); // descending order e 

    l.unique(); // duplicate value check kore if the list is sorted

    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
