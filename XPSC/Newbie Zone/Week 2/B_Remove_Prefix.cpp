#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);

        for(int i=0; i<n; i++)
            cin >> A[i];

        set<int> s;
        int unique_val = 0;

        for(int i= n-1; i>=0; i--)
        {
            if(s.count(A[i]))
            {
                //if found any duplicate
                break;
            }
            s.insert(A[i]);
            unique_val++;
        }

        cout << n - unique_val << '\n';
    }

    return 0;
}
