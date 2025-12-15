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
        char section;
        int math_marks;
        int cls;

        Student(string name, int roll, char section, int math_marks, int cls){
            this->name = name;
            this->roll = roll;
            this->section = section;
            this->math_marks = math_marks;
            this->cls = cls;
        }
};

int main()
{
    Student salman( "Salman", 1, 'A', 90, 10);
    Student atiq( "Atiq", 20, 'I', 100, 9);
    Student afridi( "Afridi", 3, 'C', 90, 8);

    if(salman.math_marks > atiq.math_marks && salman.math_marks > afridi.math_marks){
        cout << salman.name << endl;
    }
    else if(atiq.math_marks > afridi.math_marks && atiq.math_marks > salman.math_marks){
        cout << atiq.name << endl;
    }
    else{
        cout << afridi.name << endl;
    }
    return 0;
}
