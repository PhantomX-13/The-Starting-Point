#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    // Step 1: Move elements from queue to stack
    stack<int> st;
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Move elements from stack to a new queue
    queue<int> reversedQ;
    while (!st.empty()) {
        reversedQ.push(st.top());
        st.pop();
    }

    // Step 3: Print the reversed queue
    while (!reversedQ.empty()) {
        cout << reversedQ.front() << " ";
        reversedQ.pop();
    }

    cout << endl;
    return 0;
}
