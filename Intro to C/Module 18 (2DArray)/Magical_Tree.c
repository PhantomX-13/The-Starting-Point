#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int tri_rows = N + 5;
    int width = 2 * tri_rows - 1;  
   
    for (int i = 0; i < tri_rows; i++) {
        int stars = 2 * i + 1;
        int spaces = (width - stars) / 2;

        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }

    int low_spaces = (width - N) / 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < low_spaces; j++) printf(" ");
        for (int j = 0; j < N; j++) printf("*");
        printf("\n");
    }

    return 0;
}
