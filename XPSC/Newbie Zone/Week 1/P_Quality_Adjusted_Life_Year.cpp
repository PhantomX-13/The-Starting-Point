#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    double sum = 0;
    while(n--)
    {
        double p, y;
        cin >> p >> y;

        double qaly = p * y;
        sum += qaly;
    }

    cout << sum << '\n';
    return 0;
}
