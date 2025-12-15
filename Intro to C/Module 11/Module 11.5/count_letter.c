#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    scanf("%s", &s);
    int freq[26]= {0};
    int len = strlen(s);
    for(int i=0; i < len; i++){
        int index = s[i] - 97;
        freq[index]++;
    }
    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            printf("%c : %d\n", i+97, freq[i]);
        }
    }
    return 0;
}