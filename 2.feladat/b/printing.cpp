#include<stdio.h>
#include "printing.h"

void szoveg(char* s, int n){
    for(int i = 0; i < n; i++){
        printf("%s \n", s);
    }
}