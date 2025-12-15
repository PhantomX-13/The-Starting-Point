#include <iostream>
#include <stack>
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
        string s;
        cin >> s;

        stack<char>st;
        for(int i=0; i<n; i++)
        {
            char ch = s[i];
            if(!st.empty() && st.top()==ch)
                st.pop();
            else
                st.push(ch);
        }

        cout << st.size() << '\n';
    }
    return 0;
}
