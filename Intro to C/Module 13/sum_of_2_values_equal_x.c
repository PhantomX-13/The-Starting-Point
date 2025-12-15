#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);

    int flag=0;
    for(int i=0; i<n-1; i++){  //don't understand why I'm using n-1
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j] == x){
                flag = 1;
                printf("YES\n");
                printf("%d %d\n", a[i], a[j]);
            }
        }
 
    }

    if(flag == 0){ //don't understand why I'm using flag
        printf("NO\n");
    }
    return 0;
}