#include<iostream>
using namespace std;
int main(){
    // int a[5];  static array, er size chaile barate prbo na
    int * a = new int[5]; //dynamic array, size baraite prbo
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    for(int i=0; i<5; i++){
        cout << a[i]<< " ";
    }
}