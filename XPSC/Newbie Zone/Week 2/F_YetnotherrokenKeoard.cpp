#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<pair<char, bool>> res;

        for(char c : s)
        {
            if(c == 'b')
            {
                for(int i= res.size()-1; i>=0; i--)
                {
                    if(!res[i].second)
                    {
                        res.erase(res.begin()+i);
                        break;
                    }
                }
            }
            else if(c == 'B')
            {
                for(int i= res.size()-1; i>=0; i--)
                {
                    if(res[i].second)
                    {
                        res.erase(res.begin()+i);
                        break;
                    }
                }
            }
            else
            {
                res.push_back({c,isupper(c)});
            }
        }

        for(auto p : res)
            cout << p.first;
        cout << '\n';
    }

    return 0;
}