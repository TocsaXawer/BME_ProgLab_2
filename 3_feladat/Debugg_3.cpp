#include<stdio.h>

void f(int& i){
    i=i+2;
}

int main(void){
    int i=0;
    f(i);
    printf("%d\n",i);
}
/* A kimenet 2 */