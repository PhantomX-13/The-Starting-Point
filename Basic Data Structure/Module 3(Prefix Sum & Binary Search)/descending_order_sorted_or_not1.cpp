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

    // int flag =0;
    // for(int i=0; i<n-1; i++)
    // {
    //     if(v[i] < v[i+1]) //descending order mismatch
    //     //i = n-2
    //     //v[n-2] == v[n-1]
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }

    // if(flag==0)
    // {
    //     cout <<"Sorted" << endl;
    // }
    // else{
    //     cout <<"Not sorted" << endl;
    // }

    vector<int> copy_v(v);
    sort(copy_v.begin(), copy_v.end(), greater<int>());

    int is_des_sorted = 1;
    for(int i=0; i<n; i++)
    {
        if(copy_v[i] != v[i])
        {
            is_des_sorted = 0;
            break;
        }
    }

    if(is_des_sorted == 1)
    {
        cout <<"Descending Sorted" << endl;
    }
    else{
        cout <<"Not Descending sorted" << endl;
    }
}