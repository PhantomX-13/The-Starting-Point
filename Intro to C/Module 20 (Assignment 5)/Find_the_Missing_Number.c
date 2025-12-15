#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        long long int m;
        int a,b,c;
        scanf("%lld %d %d %d", &m,&a,&b,&c);

        long long int mul = (long long int)a * b * c;

        if(mul == 0){
            if(m == 0){
                printf("0\n");
            }   
            else{
                printf("-1\n");
            }       
        } 
        else{
            if( m%mul == 0){
                 printf("%lld\n", m/mul);
            }  
            else{
                printf("-1\n");
            }       
        }
    }

    return 0;
}
