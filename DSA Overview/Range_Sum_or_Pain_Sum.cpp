#include <iostream>
using namespace std;

long long getValue(long long pos)
{
    return (pos+1)/2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    int q;
    cin >> n >> q;

    while(q--)
    {
        long long l, r;
        cin >> l >> r;

        long long sum = 0;

        for(long long i=l; i<=r; i++)
        {
            sum += getValue(i);
        }

        cout << sum << '\n';
    }

    return 0;
}
