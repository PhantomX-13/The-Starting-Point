#include <iostream>
using namespace std;
int dp[100005];

bool canReach(int curr, int target)
{
    if(curr == target) 
        return true;
    if(curr > target) 
        return false;
    if(dp[curr] != -1) 
        return dp[curr];

    bool res = {canReach(curr * 2,target) || canReach(curr + 3,target)};
    return dp[curr] = res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));

        if(canReach(1, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
