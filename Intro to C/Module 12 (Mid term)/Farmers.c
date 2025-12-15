#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    for(int i=0; i < T; i++){
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        if(M2 == 0){
            printf("0\n");
            continue;
        }

        int howManyDays = (M1 * D) /(M1+ M2);
        
        int reduce_day = (D - howManyDays);
        if(reduce_day <= 0){
            reduce_day = 1;
        }
        printf("%d\n", reduce_day);

    }
    return 0;
}