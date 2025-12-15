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

class Cricketer
{
    public:
    int jersey;
    string country;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer* dhoni = new Cricketer("India", 90);
    Cricketer* kohli = new Cricketer("India", 18);
    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey;

    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->country << " " << kohli->jersey << endl;
    return 0;
}
