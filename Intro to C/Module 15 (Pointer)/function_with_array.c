#include<stdio.h>

void fun(int a[], int n){
    for(int i=0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int main(){
   //int a[5] = {10,20,30,40,50}; 
    // fun(a); 
    /*by default kono array k func e pass krle
    seta reference hisebe pass hy , copy hyna*/

   int n;
   scanf("%d" , &n);
   int a[n];
   for(int i=0; i < n; i++){
    scanf("%d", &a[i]);
   }
   fun(a,n);
    return 0;
}