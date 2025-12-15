#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0){
        cout << 0; return 0;
    }
    if(n == 1 || n == 2){
        cout << 1; return 0; 
    }
    if(n == 3){
         cout << 2; return 0;
    }

    long long tetranacci[n+5];
    tetranacci[0] = 0;
    tetranacci[1] = 1;
    tetranacci[2] = 1;
    tetranacci[3] = 2;

    for(int i=4; i<=n; i++)
    {
        tetranacci[i] = tetranacci[i-1] + tetranacci[i-2] + tetranacci[i-3] + tetranacci[i-4];
    }

    cout << tetranacci[n] << endl;
    return 0;
}
