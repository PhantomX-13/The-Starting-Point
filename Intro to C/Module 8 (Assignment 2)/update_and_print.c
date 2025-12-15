#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    int X,V;
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d %d ", &X,&V);
    A[X] = V;
    for(int i = N-1; i >= 0; i--){
        printf("%d ", A[i]);
    }

    return 0;
}