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
    string name;
    int cls;
    char section;
    long long id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    if(a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }
    if(a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks;
    }
    return a.id < b.id; 
}

int main()
{
    int n;
    cin >> n;
    Student students[n];

    for(int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].cls >> students[i].section
             >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + n, cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
             << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }
    return 0;
}
