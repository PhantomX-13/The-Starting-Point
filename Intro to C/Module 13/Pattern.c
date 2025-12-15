#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int upper_spaces = n -1 -i;
        int hash = 2*i + 1;

        for (int j = 0; j < upper_spaces; j++){
             printf(" ");
        }
        char ch;
         if (i % 2 == 0){
            ch = '#';
         }
         else{
            ch = '-';
         }
        for (int j = 0; j < hash; j++){
            printf("%c", ch);
        }
        printf("\n");
    }

    for (int i = n-2; i >= 0; i--) {
        int lower_spaces = n -1 -i;
        int hash = 2*i + 1;

        for (int j = 0; j < lower_spaces; j++){
            printf(" ");
        } 
        char ch; 
        if(i % 2 == 0){
            ch = '#';
        }
        else{
            ch = '-';
        }
        for (int j = 0; j < hash; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
   return 0;
}
