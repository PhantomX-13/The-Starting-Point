#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> st;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    // Step 1: Move elements from stack to queue
    queue<int> q;
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    // Step 2: Move elements from queue to another stack
    stack<int> st2;
    while (!q.empty()) {
        st2.push(q.front());
        q.pop();
    }

    // Step 3: Print st2 (original insertion order)
    while (!st2.empty()) {
        cout << st2.top() << " ";
        st2.pop();
    }

    cout << endl;
    return 0;
}
