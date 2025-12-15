#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq; //minimum priority queue
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(2);
    cout << pq.top() << endl;
    pq.pop();  // 2
    pq.pop();  // 5
    cout << pq.top() << endl;
    return 0;
}