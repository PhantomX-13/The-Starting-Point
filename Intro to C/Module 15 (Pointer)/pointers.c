#include<stdio.h>
int main(){
    int x = 100;
    printf("%d\n", x);
    printf("%p\n", &x); //for printing address , we have to use p

    int* ptr;
    ptr = &x;
    *ptr = 200;
    printf("%d", *ptr);
    
    return 0;
}