#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> A(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    vector<long long> pre(n);
    pre[0] = A[0];

    for(int i=1; i<n; i++)
    {
        pre[i] = pre[i - 1] + A[i];
    }

    for(int i= n-1; i>=0; i--)
    {
        cout << pre[i] << " ";
    }

    return 0;
}
