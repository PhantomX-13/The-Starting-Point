#include<stdio.h>

int x = 10; //global variable

int sum(){
  int y = 20;
  printf("sum: %d\n", y);
}

int main(){
   
   printf("Main: %d\n", x);
   sum();
    return 0;
}