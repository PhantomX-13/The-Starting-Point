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
    getline(cin,s);
    //string er por int trpr abr string ache erkm hole ignore func use krte hto

    stringstream ss(s);
    string word;

    ss >> word; 
    reverse(word.begin(), word.end());
    cout << word;
    while(ss >> word){
        reverse(word.begin(), word.end());
        cout <<" " << word;
    }
    return 0;
}
