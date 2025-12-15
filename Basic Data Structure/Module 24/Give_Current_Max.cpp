#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;

        Student(string name, int roll, int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class cmp
{
    public:
        bool operator()(Student l, Student r)
        {
            if(l.marks < r.marks) 
                return true;       
            else if(l.marks > r.marks) 
                return false;
            else 
                return l.roll > r.roll;
        }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        string name; int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int q; 
    cin >> q;
    while(q--)
    {
        int cmd;
        cin >> cmd;

        if(cmd==0) 
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));

            if(!pq.empty())
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << "\n";
            }

            else
            {
                cout << "Empty\n";
            }
        }
        else if(cmd==1)
        {
            if(pq.empty()) cout << "Empty\n";
            else
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << "\n";
            }
        }
        else if(cmd==2)
        {
            if(pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                pq.pop();
                if(pq.empty()) cout << "Empty\n";
                else
                {
                    Student top = pq.top();
                    cout << top.name << " " << top.roll << " " << top.marks << "\n";
                }
            }
        }
    }

    return 0;
}
