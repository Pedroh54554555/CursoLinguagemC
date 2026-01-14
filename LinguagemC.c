#include<stdio.h>

int main(){

    char *nome = "Sérgio Fagundes Filho";
    char *escola = "Giovanne Barreto";
    char turma, genero;
    int idade, serie;
    float altura, peso, media;

    turma = 'B';
    genero = 'M';
    idade = 12;
    serie = 7;
    altura = 1.52;
    peso = 38.6;
    media = 6.75;

    printf("O estudante %s do genero %c, estuda na escola %s na turma %i°%c.\n", nome, genero, escola, serie, turma);
    printf("Ele tem %i anos, mede %.2f metros e pesa %.1f kg.\n", idade, altura, peso);


    return 0;
}
