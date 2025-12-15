#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int time1 = a-1;
        int time2 = abs(b-c) + c-1;
        if(time1 < time2) cout << 1 << '\n';
        else if (time1 > time2) cout << 2 << '\n';
        else cout << 3 << '\n';
    }
    return 0;
}
