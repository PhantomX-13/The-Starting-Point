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
    string s = "Hello world";
    // for(int i=0; i <s.size(); i++){
    //     cout << s[i] << endl;       
    // }

    for(string:: iterator it = s.begin();it < s.end(); it++){
        cout << *it << endl;
    }

    // cout << *s.begin() << endl;
    // cout << *(s.end()-1) << endl; //s.end string er last character point kore
    //                               // so -1 kore dereference kora hyse
    return 0;
}
