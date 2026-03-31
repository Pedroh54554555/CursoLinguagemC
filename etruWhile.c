#include<stdio.h>

int main(){
    int p = 20, i = 0, j;
    printf("Escreva um número e direi o número exponencial de vezes que é elevado 20 que caibam nesse número:\n");
    scanf("%i", &j);
    

    while (p<= j){
        i++;
        printf("p == %i\n", p);
        p = p*20;
    }
    
    printf("20 foi elevado %i vezes\nFim", i);


    return 0;
}