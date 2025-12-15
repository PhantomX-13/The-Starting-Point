#include <stdio.h>
int main() {
    int T;  
    scanf("%d", &T); 
    
    for (int i = 0; i < T; i++) {
        char S[10001];  
        scanf("%s", S);

        int capital = 0;  
        int small = 0;    
        int digit = 0;   

        for (int j=0; S[j] != '\0'; j++) {
            
            if (S[j] >= 'A' && S[j] <= 'Z') {
                capital++; 
            }
            else if (S[j] >= 'a' && S[j] <= 'z') {
                small++;  
            }
            else if (S[j] >= '0' && S[j] <= '9') {
                digit++;   
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }
    
    return 0;
}
