#include<stdio.h>

void szoveg(char* s, int n){
    for(int i = 0; i < n; i++){
        printf("%s \n", s);
    }
}

int main(){
    int n; 
    char s[128];
    printf("Add meg a szamot es a szoveget: ");
    scanf("%d", &n);
    fgets(s, 128, stdin);
    szoveg(s, n);
    return 0;
}