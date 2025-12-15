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
    list<int> l = {10,20,30,40,50,60,70};
    list<int> l2 = {100,200};

    // cout << *next(l.begin(), 2); // iterator so dereference krte hbe


    //l.insert(next(l.begin(),2), 100);

    //l.insert(next(l.begin(),2), l2.begin(),l2.end());

    // l.erase(next(l.begin(),3));

    //l.erase(next(l.begin(),2), next(l.begin(),5));

    //find---

    auto it = find(l.begin(), l.end(),20);
    if(it == l.end())
    {
        cout << "NOT FOUND" << endl;
    }
    else{
        cout << "FOUND" << endl;
    }
    
    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
