#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    cin.ignore(); //ignore next 1 char
    char s[100];
    cin.getline(s, 100);
    cout << x << endl << s << endl;
}