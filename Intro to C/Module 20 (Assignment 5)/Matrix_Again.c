#include <stdio.h>
int main() {
    int n, m;
    int twoD_matrix[101][101]; 

    scanf("%d %d", &n,&m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &twoD_matrix[i][j]);
        }
    }
    
    for(int j = 0; j < m; j++){
        printf("%d ", twoD_matrix[n - 1][j]);
    }

    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ", twoD_matrix[i][m - 1]);
    }
    printf("\n");

    return 0;
}
