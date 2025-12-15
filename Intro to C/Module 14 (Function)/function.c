#include<stdio.h>

int double_it(int num){
    num *= 2;
    return num;
}

int main(){
    int x = 10;
    int dbl = double_it(x);
    printf("%d", dbl);
}