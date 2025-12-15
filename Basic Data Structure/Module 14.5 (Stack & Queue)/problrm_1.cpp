#include <iostream>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    myStack st;
    myStack st2;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    if (st.size() != st2.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!st.empty() && !st2.empty())
        {
            if (st.top() != st2.top())
            {
                flag = false;
                break;
            }
            st.pop();
            st2.pop();
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}