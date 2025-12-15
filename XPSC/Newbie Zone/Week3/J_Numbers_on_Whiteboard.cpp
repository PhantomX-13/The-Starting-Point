#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        priority_queue<int> pq; // max-heap

        for(int i = 1; i <= n; i++)
            pq.push(i);

        vector<pair<int,int>> ops;

        while(pq.size() > 1) {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();

            ops.push_back({a, b});

            int newVal = (a + b + 1) / 2; // ceil((a+b)/2)
            pq.push(newVal);
        }

        // final number left
        cout << pq.top() << "\n";

        // print operations
        for(auto &p : ops)
            cout << p.first << " " << p.second << "\n";
    }
    return 0;
}