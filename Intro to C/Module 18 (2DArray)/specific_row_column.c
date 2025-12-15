#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c);
    int a[3][4]; //[row][column]
    a[r][c];

    for(int i=0; i<r; i++){  
        for(int j=0; j<c; j++){ 
            scanf("%d", &a[i][j]);
        }
    }

    // int specific_row;
    // scanf("%d", &specific_row);
    // for(int i=0; i<c; i++){ //bcz we have to print column
    //     printf("%d ", a[specific_row][i]);
    // } 

    int specific_col;
    scanf("%d", &specific_col);
    for(int i=0; i<r; i++){ //bcz we have to print column
        printf("%d\n", a[i][specific_col]);
    }
    return 0;
}