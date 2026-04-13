#include<stdio.h>

int main(){
    printf("Números pares de 1 à 60!\n");
    for(int num = 1; num<= 60; num ++){
        if(!(num %2 )){
            printf("%i\n", num);
        }
    }
    return 0;
} 