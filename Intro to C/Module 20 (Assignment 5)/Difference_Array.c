#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for(int t = 0; t < T; t++){
        int N;
        scanf("%d", &N);

        int A[1000], B[1000], C[1000];

        for(int i = 0; i < N; i++){
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        for(int i = 0; i < N - 1; i++){
            int small = i;
            for(int j = i + 1; j < N; j++){
                if(B[j] < B[small]){
                    small = j;
                }
            }



            int temp = B[i];
            B[i] = B[small];
            B[small] = temp;
        }

        for(int i = 0; i < N; i++){
            int difference = A[i] - B[i];
            if(difference < 0){
                difference = -difference;
            }
            C[i] = difference;
        }

        for(int i = 0; i < N; i++){
            printf("%d", C[i]);
            if(i != N - 1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
