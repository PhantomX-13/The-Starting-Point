#include <iostream>
#include <queue>
using namespace std;

int main(){
    int q;
    cin >> q;
    queue<string> l; 
    for(int i = 0; i < q; i++)
    {
        int cmnd;
        cin >> cmnd;

        if(cmnd == 0)
        {
            string name;
            cin >> name;
            l.push(name);
        } 
        else
        {
            if(l.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << l.front() << endl;
                l.pop();
            }
        }
    }
    return 0;
}
