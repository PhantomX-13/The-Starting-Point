#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c);
    int a[3][4]; //[row][column]
    a[r][c];

    for(int i=0; i<r; i++){  //row
        for(int j=0; j<c; j++){  //column
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<r; i++){  //row
        for(int j=0; j<c; j++){  //column
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}