#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> A(n), B(n);

        for(int i=0; i<n; i++)
            cin >> A[i];

        for(int i=0; i<n; i++)
            cin >> B[i];

        int happyDays = 0;

        for(int i=0; i<n; i++) 
        {
            if(B[i] <= 2 * A[i] && A[i] <= 2 * B[i])
            {
                happyDays++;
            }
        }
        cout << happyDays << "\n";
    }

    return 0;
}
