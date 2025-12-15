#include<stdio.h>

// return_type function_name(parameters){

//     return
// }

int sum(int num1, int num2){
    int ans = num1 + num2;
    return ans;
}

int sub(int num1, int num2){
    int ans = num1 - num2;
    return ans;
}

int main(){
    int val = sum(10,20);
    int val2 = sub (200,100);
    int val3 = sum(2,3);
    printf("%d %d %d", val,val2, val3);
    return 0;
}