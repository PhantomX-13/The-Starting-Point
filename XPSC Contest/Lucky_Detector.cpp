#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;

    string s = to_string(n);
    if(find (s.begin(), s.end(), '7') != s.end())
        cout << "Lucky\n";
    else
        cout << "Not Lucky\n";
    return 0;
}
