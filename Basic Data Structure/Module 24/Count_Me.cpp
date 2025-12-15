#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        map<string,int> mp;

        string maxWord;
        int maxCount = 0;

        while(ss >> word)
        {
            mp[word]++;

            if(mp[word] > maxCount)
            {
                maxCount = mp[word];
                maxWord = word;
            }
        }
        cout << maxWord << " " << maxCount << "\n";
    }

    return 0;
}
