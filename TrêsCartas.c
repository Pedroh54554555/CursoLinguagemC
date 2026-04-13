#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int cartaA, cartaB, cartaC, numero;
    
    srand(time(0));
    cartaA = 1 + rand()% 1000;
    cartaB = 1 + rand()% 1000;
    cartaC = 1 + rand()% 1000;

    printf("A seguir você tem 3 opções de cartas com valores aleatórios.\nEscolha a maior para vencer!\nEscolha entre:\nCarta A, digite 1;\nCarta B, digite 2;\nCarta C digite 3.\n");
    scanf("%i", &numero);

    switch (numero){
        case 1:
            if(cartaA>=cartaB && cartaA>=cartaC){
                printf("Parabéns você acertou!\n");
            }else{
                printf("Você errou, mais sorte da próxima vez!\n");
            }
            break;
        case 2:
            if(cartaB>=cartaA && cartaB>=cartaC){
                printf("Parabéns você acertou!\n");
            }else{
                printf("Você errou, mais sorte da próxima vez!\n");
            }
            break;
        case 3:
            if(cartaC>=cartaA && cartaC>=cartaB){
                printf("Parabéns você acertou!\n");
            }else{
                printf("Você errou, mais sorte da próxima vez!\n");
            }
            break;
        default:
            printf("Esse valor é inválido!\n");
    }

    printf("Os números eram:\nCarta A: %i\nCarta B: %i\nCarta C: %i\n", cartaA, cartaB, cartaC);
    return 0;
}