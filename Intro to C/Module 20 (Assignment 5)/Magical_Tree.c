#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tri_rows = n + 2;
    int star = 1;
    int space = tri_rows - 1;

    for (int i = 1; i <= tri_rows; i++) {
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    int trunk_space = (2 * tri_rows - 1 - n) / 2; 

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < trunk_space; j++) {
            printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
