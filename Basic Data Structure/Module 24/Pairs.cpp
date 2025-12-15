#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, vector<int>> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        int num;
        cin >> s >> num;
        mp[s].push_back(num);
    }

    for(auto it = mp.begin(); it != mp.end(); ++it)
    {
        sort(it->second.begin(), it->second.end(), greater<int>());

        for(int j=0; j<it->second.size(); j++)
        {
            cout << it->first << " " << it->second[j] << "\n";
        }
    }

    return 0;
}
