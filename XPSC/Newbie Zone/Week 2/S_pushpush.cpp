#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    deque<long long> b;

    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
            b.push_front(a[i]);
        else
            b.push_back(a[i]);
    }

    if(n%2 == 0)
        reverse(b.begin(), b.end());

    for(auto x : b)
        cout << x << " ";
    cout << '\n';
}
