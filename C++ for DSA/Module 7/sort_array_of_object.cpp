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
#include <climits>

using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;

};

bool cmp(Student left, Student right)
{
    // if(left.roll < right.roll)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return left.marks >= right.marks; 
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
   sort(a,a+n,cmp);
   for(int i=0; i<n; i++)
   {
    
    cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
   }
    return 0;
}

