#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void fun(int* p)
{
    int y = 200;
    p = &y;
    cout << "In fun: " << &p << endl;
}
int main()
{
    int x = 10;
    int* p = &x;
    fun(p);
    cout << "In Main: " << &p << endl;
    return 0;
}
