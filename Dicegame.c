#include<stdio.h>
#include<stdlib.h>

int main(){
    int d1,d2;

    printf("Rolling dice....\n");
    d1 = rand()%6 + 1;
    d2 = rand()%6 + 1;
    printf("Die 1: %d\n", d1);
    printf("Die 2: %d\n", d2);
    printf("Total value: %d\n", d1+d2);

    if(d1+d2>7){
        printf("You won!\n");
    }else{
        printf("You lost.\n");
    }
    return 0;
}