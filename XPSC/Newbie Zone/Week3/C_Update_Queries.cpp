#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> ind(m);
        for(int i=0; i<m; i++)
            cin >> ind[i];

        string c;
        cin >> c;

        sort(c.begin(), c.end());

        unordered_map<int, int> seen;
        vector<int> uq_pos;

        for(int x : ind)
        {
            if(!seen.count(x))
            {
                seen[x] = 1;
                uq_pos.push_back(x);
            }
        }

        sort(uq_pos.begin(), uq_pos.end());

        for(int i=0; i<uq_pos.size(); i++)
        {
            s[uq_pos[i] - 1] = c[i];
        }

        cout << s << "\n";
    }
    return 0;
}