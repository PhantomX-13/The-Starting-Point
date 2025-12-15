#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int cnt1 = 0;
        vector<int> h(n);

        for(int i=0; i<n; i++)
        {
            cin >> h[i];
            if(h[i] == 1)
                cnt1++;
        }

        int moves = n - cnt1 / 2;
        cout << moves << '\n';
    }

    return 0;
}
