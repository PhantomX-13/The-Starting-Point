#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<char> result;

    for(char c : s)
    {
        if(c == '<')
        {
            if(!result.empty())
                result.pop_back();
        }
        else
        {
            result.push_back(c);
        }
    }

    for(char c : result)
        cout << c;

    cout << '\n';
    return 0;
}
