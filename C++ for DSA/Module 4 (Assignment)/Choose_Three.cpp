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
    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        int N,S;
        cin >> N >> S;

        int A[120];

        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int milse = 0;

        for(int i = 0;i < N; i++)
        {
            for(int j = i+1; j < N; j++)
            {
                for(int k = j+1; k < N; k++)
                {
                    if(A[i] + A[j] + A[k] == S)
                    {
                        milse = 1;
                        break;
                    }
                }
                if(milse == 1)
                {
                    break;
                }
            }
            if(milse == 1)
            {
                break;
            }
        }

        if(milse == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
