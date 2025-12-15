#include <iostream>
#include <vector>
#include <string>
using namespace std;

string kenKeoard(string s)
{
    vector<char> result;
    for(char c : s)
    {
        if(c == 'b')
        {
            for(int i=result.size()-1; i>=0; i--)
            {
                if(islower(result[i]))
                {
                    result.erase(result.begin() + i);
                    break;
                }
            }
        }
        else if(c == 'B')
        {
            for(int i=result.size()-1; i>=0; i--)
            {
                if(isupper(result[i]))
                {
                    result.erase(result.begin()+i);
                    break;
                }
            }
        }
        else
        {
            result.push_back(c);
        }
    }

    return string(result.begin(), result.end());
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string line;
        getline(cin, line);
        cout << kenKeoard(line) << endl;
    }
    return 0;
}