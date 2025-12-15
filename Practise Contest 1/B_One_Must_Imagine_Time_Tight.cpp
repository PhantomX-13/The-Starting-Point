#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;

    int minimum = min(a,min(b,c));

    cout << minimum << '\n';
    return 0;
}
