#include<stdio.h>
#include"printing.h"

int main(){
    int n; 
    char s[128];
    printf("Add meg a szamot es a szoveget: ");
    scanf("%d", &n);
    fgets(s, 128, stdin);
    szoveg(s, n);
    return 0;
}