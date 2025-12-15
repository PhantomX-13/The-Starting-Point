#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    // Input stack
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    // Input queue
    cin >> m;
    queue<int> q;
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    // First check size
    if (st.size() != q.size()) {
        cout << "NO" << endl;
        return 0;
    }

    // Compare removal order
    bool same = true;
    while (!st.empty()) {
        if (st.top() != q.front()) {
            same = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
