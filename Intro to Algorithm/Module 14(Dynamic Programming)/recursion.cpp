#include<iostream>
using namespace std;

int rec(int n) //O(N)
{
    if(n>5)
        return 0;
    int sum = rec(n+1);
    return sum + n;
}

int main()
{
    cout << rec(1) << endl;
    return 0;
}