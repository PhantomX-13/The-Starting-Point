#include <iostream>
#include <set>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;
    multiset<int> ml;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    int ans = 0, problems = 1;
    while (!ml.empty())
    {
        auto LB = ml.lower_bound(problems);
        if(LB != ml.end())
        {
            ans++;
            ml.erase(LB);
        }
        else
        {
            break;
        }
        problems++;
    }

    cout << ans << '\n';
     
    return 0;
}
