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
    string s1;
    getline(cin, s1);
    cout << s1 << endl;

    stringstream ss(s1);
    string word;
    while(ss >> word){ 
         cout << word << endl;
    }
    //etar maddhome string theke ekta kore word "word" e niye asha jai
   
    return 0;
}
