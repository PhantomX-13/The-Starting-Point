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
    string s;
    cin >> s;
    cout << s[4] << endl;
    cout << s.at(4) << endl;
    cout << s[s.size()-1] << endl;
    cout <<s.back() << endl; //string er last character
    cout << s.front() << endl;  // string er 1st character
    return 0;
}
