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
    int id;
    string name;
    char section;
    int total_marks;

    Student(int id, string name, char section, int total_marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main()
{
    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        Student s1(0, "", 'A', 0);
        Student s2(0, "", 'A', 0);
        Student s3(0, "", 'A', 0);

        cin >> s1.id >> s1.name >> s1.section >> s1.total_marks;
        cin >> s2.id >> s2.name >> s2.section >> s2.total_marks;
        cin >> s3.id >> s3.name >> s3.section >> s3.total_marks;

        Student topper = s1;

        if((s2.total_marks > topper.total_marks) || (s2.total_marks == topper.total_marks && s2.id < topper.id))
        {
            topper = s2;
        }
        if((s3.total_marks > topper.total_marks) || (s3.total_marks == topper.total_marks && s3.id < topper.id))
        {
            topper = s3;
        }

        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;
    }

    return 0;
}
