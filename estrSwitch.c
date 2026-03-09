#include<stdio.h>

int main(){

    float saldo = 3459.99, saque;
    int variavel;
    printf("Menu do sistema, selecione uma das opções a seguir!\n"); 
    printf("Digte 1 para verificar seu saldo:\n");
    printf("Digte 2 para fazer um depósito:\n");
    printf("Digte 3 para fazer um saque:\n");
    scanf("%i", &variavel);

    switch(variavel) {
    case 1:
        printf("Seu saldo atual é de %.2fR$.\n", saldo);
    break;

    case 2:
        printf("Depósito realizado com sucesso!\n");
    break;

    case 3:
        printf("Digite o valor do saque:\n");
        scanf("%f", &saque);
        if(saque>saldo){
            printf("Saldo insuficiente!\n");
        } else{
            printf("Saque realizado com sucesso!\n");
            saldo -= saque;
            printf("Seu saldo agora é de: %.2fR$\n", saldo);
        }
    break;
    default:
        printf("Valor inválido!\n");
    }    

    return 0;
}