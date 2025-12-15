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

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string S,X;
        cin >> S >> X;

        int lenS = S.size();
        int lenX = X.size();

        for(int i=0;i<=lenS-lenX;i++)
        { 
            bool isFound = true;
            for(int j = 0; j < lenX; j++)
            { 
               if(S[i + j] != X[j])
               {
                    isFound = false;
                    break;
                }
            }
            if(isFound) 
            {
                S.erase(i, lenX);
                S.insert(i, "#");
                lenS = S.size();
                i = i;
            }
        }

        cout << S << endl;
    }
    return 0;
}
