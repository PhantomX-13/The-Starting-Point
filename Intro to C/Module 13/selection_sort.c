#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i<n-1; i++){  /* i & j niye kaj korar smy
         i last er ager index porjnto jai, so that n-1 */

        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}