#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int left, right;
        cin >> left >> right;

        long long int min_val = min (left, right);
        long long int max_Val = max(left, right);

        long long int l = (min_val-1) * min_val / 2; //before left sum
        long long int r = max_Val * (max_Val + 1) / 2;

        cout << r - l << '\n';
    }
    return 0;
}
