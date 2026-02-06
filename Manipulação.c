#include<stdio.h>

int main(){
    float n1 =5.5;
    float n2 = 2.2;
    float soma, subtracao, multiplicacao, divisao;
    soma = n1 = n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;


    printf("A soma é: %.2f\n", soma);
    printf("A subtração é: %.2f\n", subtracao);
    printf("A multiplicação é: %.2f\n", multiplicacao);
    printf("A divisão é: %.2f\n", divisao);
    return 0;
}