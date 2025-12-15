#include <iostream>
#include <set>
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
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        
        set<int> s(a.begin(), a.end());
        cout << s.size() << '\n';
    }
    return 0;
}
