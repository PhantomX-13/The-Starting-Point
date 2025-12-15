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

   //for(int i=1; i*i <= n; i++)
    for(int i=1; i<= sqrt(n); i++)
    {
        if(n%i==0)  //O(sqrt(n))
        {
            cout << i << " " << n/i << " ";
        }
    }
    return 0;
}

/* mainly this method working when we find any num divisior */