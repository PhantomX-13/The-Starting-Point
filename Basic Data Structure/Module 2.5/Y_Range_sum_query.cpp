#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<long long> v(N+1);  
    for(int i = 1; i <= N; i++){
        cin >> v[i];
    }

    vector<long long> pre(N+1);
    pre[1] = v[1];
    for(int i=2; i<= N; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    
    while(Q--)
    {
        int L, R;
        cin >> L >> R;
        long long sum;

        if(L == 1)
        {
            sum = pre[R];
        }
        else{
            sum = pre[R] - pre [L-1];
        }
         cout << sum << endl;
    }
    
    return 0;
}
