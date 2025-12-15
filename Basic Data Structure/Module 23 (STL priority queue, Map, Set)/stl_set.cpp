#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while(n--)
    {
        int val;
        cin >> val;
        s.insert(val);     // logN
    }

    for(auto it = s.begin(); it != s.end();it++)
    {
        cout << *it << endl;
    }

    if(s.count(40))  // logN  //set er moddhe specific ei element ase ki nai 
        cout << "Ache";
    else
        cout << "Nai";

    return 0;
}

//stl set mainly duplicate value remove kore diye unique value rakhe
//set balanced bst maintain so complexity logN