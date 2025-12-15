#include <iostream>
using namespace std;

bool canReach(int n,int jump1,int jump2)
{
    for(int a=0; a<= n/jump1; a++)
    {
        int rem = n - a * jump1;
        if(rem % jump2 == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        bool leapy = canReach(n, 3, 4);
        bool jumpster = canReach(n, 3, 5);

        if(leapy && jumpster)
        {
            cout << "Both\n";
        }
        else if(leapy)
        {
            cout << "Leapy\n";
        }
        else if(jumpster)
        {
            cout << "Jumpster\n";
        }
        else
        {
            cout << "None\n";
        }
    }
    return 0;
}
