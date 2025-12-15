#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int a,b;
    cin >> a >> b;

    int op1 = a+b;
    int op2 = a + (a-1);
    int op3 = b + (b-1);

    cout << max(op1, max (op2, op3)) << '\n';
    return 0;
}
