#include<iostream>
#include<iomanip> 
using namespace std;
int main(){
    double d = 23.34572;
    cout << fixed << setprecision(3) << d << endl;
}

/* iomanip means input output manipulators, usually double r por 4digit 
print hy, but we can change it by using setprecision */