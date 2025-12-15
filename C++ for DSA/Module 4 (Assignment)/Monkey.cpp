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
    char s[100001];

    while(cin.getline(s, 100001)){
        char c[100001];
        int found = 0;

        for(int i=0; s[i]!= '\0'; i++){

            if(s[i]>='a' && s[i] <='z'){
                c[found] = s[i];
                found++;
            }
        }
        c[found] = '\0';
        sort(c, c + found);
        cout << c << endl;
    }
    return 0;
}
