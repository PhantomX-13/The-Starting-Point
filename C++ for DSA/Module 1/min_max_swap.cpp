#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;

    cout << min(a,b) << endl;
    cout << max(a,b) << endl;

    cout << min({3,5,7,10,22}) << endl;
    cout << max({23,645,24,52,12}) << endl;

/* if we use more than 2 number, we have to use 2nd braceket */

    /* int temp = a;
       a = b;
       b = temp; */

    swap (a,b);
    cout << "After swapping: " << a << " " << b << endl;
}