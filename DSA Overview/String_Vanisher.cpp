#include <iostream>
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
        string s;
        cin >> n >> s;

        vector<char> v(s.begin(), s.end());
        int op = 0;

        while(!v.empty())
        {
            vector<char> next_ch;
            bool skip = false;

            for(char c : v)
            {
                if(skip)
                {
                    next_ch.push_back(c);
                    skip = false;
                }
                else
                {
                    skip = true;
                }
            }
            v = next_ch;
            op++;
        }
        cout << op << '\n';
    }

    return 0;
}
