#include <iostream>
#include <set>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int q;
    cin >> q;
    set<int>s;

    while(q--){
        int q_type, x;
        cin >> q_type >> x;

        if(q_type == 1){
            s.insert(x);
        }

        else if(q_type == 2){
            s.erase(x);
        }
        else if(q_type == 3){
            if(s.find(x) != s.end()){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
    }
    return 0;
}
