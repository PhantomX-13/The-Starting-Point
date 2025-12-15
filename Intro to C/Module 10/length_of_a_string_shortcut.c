#include<stdio.h>
#include<string.h>
int main(){
    char a[101];
    scanf("%s", &a);

    int sz = strlen(a);
    printf("%d", sz);
    return 0;
}