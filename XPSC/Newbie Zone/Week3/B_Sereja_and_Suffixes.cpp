#include <iostream>
#include <set>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> a(n+1), cnt(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    set<int> s;
    for(int i=n; i>=1; i--)
    {
        s.insert(a[i]);
        cnt[i] = s.size(); //s.size bole disse koita distinct element ache
    }

    for(int i=1; i<=m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos] << '\n';
    }
    return 0;
}
