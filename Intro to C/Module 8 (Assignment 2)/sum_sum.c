#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  

    int V[N];
     int sum_pos = 0;      
     int sum_neg = 0;      

    for (int i = 0; i <= N; i++) {
        scanf("%d", &V[i]); 

        if (V[i] > 0) {
            sum_pos = sum_pos + V[i];
        } else if (V[i] < 0) {
            sum_neg = sum_neg + V[i];
        }
        
    }

    printf("%d %d", sum_pos, sum_neg);  

    return 0;
}
