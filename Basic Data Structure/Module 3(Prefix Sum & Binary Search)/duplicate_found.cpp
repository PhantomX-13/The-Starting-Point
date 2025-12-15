#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    //O(n)
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    //O(n * logn)
    // n = 10^5
    //n* logn = 10^5 * log 10^5 = 10^5 * 17 = 1.7 * 10^6 
    sort(v.begin(), v.end());

    int flag =0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i] == v[i+1])
        //i = n-2
        //v[n-2] == v[n-1]
        {
            flag = 1;
            //break;
        }
    }
    if(flag==0)
    {
        cout <<"No Duplicate" << endl;
    }
    else{
        cout <<"Duplicate" << endl;
    }
}