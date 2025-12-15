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

class Student{
    public: 
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;

    }
};
int main()
{
    Student rahim(45,5,4.5);

    Student karim(2,5,5.00);
    

    cout << rahim.roll << " " <<rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " <<karim.cls << " " << karim.gpa << endl;
    return 0;
}
