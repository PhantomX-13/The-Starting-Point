#include<stdio.h>

void hello(int i){ 
    if(i==0){      // end condition
        return;
    }
    printf("%d\n", i);
    hello(i-1);    //increment/decrement 
}
int main(){

    hello(5);    //initialization / starting
    return 0;
}


//for(int i=1; i <=5; i++)
//for(int i=5; i >=0; i--)