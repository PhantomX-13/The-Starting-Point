#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];

        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a,a+n);
        int mn = a[0];
        int mx = a[n-1];

        if(mx%2 == mn %2) cout << 0 << endl;

        else
        {
            int i=0, cnt1 = 0;
            while(a[i]%2 != mx%2) //this case is for minimum
            {
                i++;
                cnt1++;
            }

            int j= n-1, cnt2 = 0;
            while(a[j]%2 != mn%2) //this case is for maximum
            {
                j--;
                cnt2++;
            }

            cout << min(cnt1,cnt2) << endl;
        }
    }
    return 0;
}
