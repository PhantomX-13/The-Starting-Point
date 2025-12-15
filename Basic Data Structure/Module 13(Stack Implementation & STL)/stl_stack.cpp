#include<iostream>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}

/* top & pop implement er age always check krte hbe empty kina, empty na hole
then use krte prbo naile segmentation fault / run time error chole ashbe */