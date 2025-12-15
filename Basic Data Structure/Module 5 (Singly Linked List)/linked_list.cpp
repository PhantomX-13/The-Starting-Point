#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    cout << (long long)&a[1] << " " << (long long)&a[2];
    cout << endl;

    vector<int> v = {1,2,3,4,5};
    cout << (long long)&v[1] << " " << (long long)&v[2];

    return 0;
}

/* 
linked list e always ekti array element next element er memory 
tar kase rekhe dey 

Singly linked: 10 -> 20 -> 30 -> Null 
(every value sthe ekti kore connection,back asha jai na)
*/
