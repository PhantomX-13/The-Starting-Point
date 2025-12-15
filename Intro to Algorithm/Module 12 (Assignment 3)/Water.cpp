#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<long long> H(N);
        for(int i=0; i<N; i++)
            cin >> H[i];

        long long bestHeight = -1;
        int ansL = 0;
        int ansR = 1;

        int l=0, r= N-1;
        while(l < r)
        {
            long long cur = min(H[l], H[r]);
            if(cur > bestHeight)
            {
                bestHeight = cur;
                ansL = l;
                ansR = r;
            }
            if(H[l] < H[r])
                l++;
            else
                r--;
        }

        cout << ansL << " " << ansR << "\n";
    }
    return 0;
}
