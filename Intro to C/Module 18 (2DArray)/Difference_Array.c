#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[1000], B[1000], C[1000];

        // Read array A and copy it to B
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        // Sort array B using bubble sort (simple for beginners)
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (B[j] > B[j + 1]) {
                    // Swap B[j] and B[j+1]
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        // Calculate the absolute differences into C
        for (int i = 0; i < N; i++) {
            int diff = A[i] - B[i];
            if (diff < 0) {
                diff = -diff;  // Make it positive
            }
            C[i] = diff;
        }

        // Print array C
        for (int i = 0; i < N; i++) {
            printf("%d", C[i]);
            if (i != N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
