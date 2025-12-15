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
    int math;
    int english;
    Student(string name, int roll,int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;

    }
   void total()
   {
    cout << "Total marks of " << name <<" = " << math+english << endl;
   }
};

int main()
{
    Student pranjoy("Pranjoy", 22, 85,92);
    pranjoy.total();
    Student joy("Joyyy", 12, 65,99);
    joy.total();
    return 0;
}
