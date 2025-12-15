#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<long long int,pair<int,int>> mp;
    for(int i=1; i<=n; i++)
    {
        long long int num;
        cin >> num;
        auto it = mp.find(num);

        if(it == mp.end())
        {
            mp[num] = make_pair(i, i);
        }
        else
        {
            pair<int,int>old_pair = it->second;
            old_pair.second = i;
            it->second = old_pair;
        }
    }

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << " " << it->second.first << " " << it->second.second << '\n';
    }
    return 0;
}

