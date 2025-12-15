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

class Student
{
    public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello() //er kaj sudhu hello print kora
    {
        cout << "Hello from " << name << endl;;
    }
};

int main()
{
    Student pranjoy("Pranjoy", 22);
    pranjoy.hello();
    Student joy("Joyyy", 12);
    joy.hello();
    return 0;
}
