#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> books(n);

    for(int i=0; i<n; i++)
    {
        cin >> books[i];
    }

    int target;
    cin >> target;

    int index = -1;
    for(int i=0; i<n; i++)
    {
        if(books[i] == target)
        {
            index = i;
            break;   
        }
    }

    cout << index << '\n';
    return 0;
}
