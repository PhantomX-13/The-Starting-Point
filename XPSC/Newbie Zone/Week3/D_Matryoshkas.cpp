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

        multiset<long long> s;
        for(int i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }

        int ans = 0;

        while(!s.empty())
        {
            ans++;  // starting a new set
            long long curr = *s.begin(); // smallest element
            s.erase(s.begin());

            // try to build consecutive sequence
            while(true)
            {
                long long nextVal = curr + 1;
                auto it = s.find(nextVal);

                if(it != s.end())
                {
                    // found next element, extend chain
                    curr = nextVal;
                    s.erase(it);
                }
                else
                {
                    // chain cannot extend, end this set
                    break;
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}