#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]){
    int len = strlen(s);
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len -i -1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char ch[1001];
    scanf("%s",ch);
    
    int result = is_palindrome(ch);
    
    if(result == 1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}
