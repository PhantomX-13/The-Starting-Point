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
    //list behind the scene doubly linked list hisebe kaj kore
    list<int>l;
    cout << l.size() << endl;

    list<int>l(10,3);
    //cout << *l.begin() << endl; //l.begin ekhn ekta iterator
    
    //sb gula value print krte chaile
    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl; //iterator dereference kore print krte hbe

        /*ekhane it, okhne tmp node er mto kaj krse..same way te 
        it++ tmp.next er kaj krse */
    }

    //shortcut:-

    //list<int>l(10,5);
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }
    return 0;
}
