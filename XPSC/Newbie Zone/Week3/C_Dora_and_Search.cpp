#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        set<int> s(arr.begin(), arr.end());

        int l = 0, r = n-1;
        bool found = false;

        while(l<r && !s.empty())
        {

            int mn = *s.begin();
            int mx = *s.rbegin();

            if(arr[l] != mn && arr[l] != mx && arr[r] != mn && arr[r] != mx)
            {
                cout << l+1 << " " << r+1 << '\n';
                found = true;
                break;
            }

            if(arr[l] == mn || arr[l] == mx)
            {
                s.erase(arr[l]);
                l++;
            }
            else if(arr[r] == mn || arr[r] == mx)
            {
                s.erase(arr[r]);
                r--;
            }
            else
                break;
        }

        if(!found)
            cout << -1 << '\n';
    }

    return 0;
}