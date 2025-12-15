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
    char name[100]; //100 bytes
    int roll;       // 4 bytes
    double gpa;     // 8 bytes
};
int main()
{
    Student a;
    a.roll = 10;
    a.gpa = 4.5;
    char temp[100] = "Sakib";
    strcpy(a.name, temp);  //copy krtese

    cout <<a.name << " " <<a.roll << " " <<a.gpa << endl;
    return 0;
}
