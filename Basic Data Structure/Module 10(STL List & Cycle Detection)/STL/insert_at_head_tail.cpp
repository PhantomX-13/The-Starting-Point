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
    list<int> l = {10,20,30};
    
    l.push_back(40); //insert_At_tail shortcut
    l.push_front(100); //insert at head shortcut

    l.pop_back(); // delete at tail shortcut
    l.pop_front(); // delete at head shortcut


    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
