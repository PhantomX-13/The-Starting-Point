#include<stdio.h>

void hello(){ //যে ফাংশন নিজে নিজেই কল করে তাকে recursive func বলে 
    printf("Hello\n");
   // hello();  //ওভারওল প্রসেস কে recursion বলে 
}
int main(){
    printf("Hi\n");
    hello();
    return 0;
}