#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int q;
    cin >> q;
    while(q--)
    {
        int cmd;
        cin >> cmd;
        if(cmd == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << "\n";
        } 
        else if(cmd == 1)
        {
            if(pq.empty()) cout << "Empty\n";
            else cout << pq.top() << "\n";
        } 

        else if(cmd == 2)
        {
            if(pq.empty()){
                cout << "Empty\n";
            }
            else
            {
                pq.pop();
                if(pq.empty()) cout << "Empty\n";
                else cout << pq.top() << "\n";
            }
        }
    }

    return 0;
}
