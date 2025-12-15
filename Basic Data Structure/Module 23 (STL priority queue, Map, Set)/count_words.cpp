#include <iostream>
#include <sstream> // for stringstream
#include <map>     // for map
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s); //ekta ekta kore word alada er jnno
    string word;
    map<string,int> mp; //for count word
    while(ss >> word) // NlogN    //stringstream theke protibar ekta kore word ber kore niye ashbo
    {
        mp[word]++;          //logN
    }
    for(auto it = mp.begin(); it!=mp.end(); it++) //NlogN
    {
        cout << it->first << " " << it->second << endl; //logN
    }
    return 0;
}