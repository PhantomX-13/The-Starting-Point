#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int is_ascen_sorted = 1;
    for(int i=0; i<n; i++)
    {
        if(v[i] < v[i-1])
        {
            is_ascen_sorted = 0;
            break;
        }
    }

    if(is_ascen_sorted == 1)
    {
        cout <<"YES" << endl;
    }
    else{
        cout <<"NO" << endl;
        }
    }
}

