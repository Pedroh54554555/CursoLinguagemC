#include<stdio.h>

int main(){

    char *nome = "Sérgio Fagundes Filho";
    char *escola = "Giovanne Barreto";
    char turma, genero;
    int idade, serie;
    float altura, peso, media, Np, Nm, Nh, Nc, Nef, Na;

    turma = 'C';
    genero = 'M';
    idade = 10;
    serie = 5;
    altura = 1.42;
    peso = 31.6;

    printf("Informe as notas do aluno %s neste bimestre:\n", nome);
    printf("Nota de português:\n");
    scanf("%f", &Np);

    printf("Nota de matemática:\n");
    scanf("%f", &Nm);

    printf("Nota e história:\n");
    scanf("%f", &Nh);

    printf("Nota de ciências:\n");
    scanf("%f", &Nc);

    printf("Nota de educação física:\n");
    scanf("%f", &Nef);

    printf("Nota de artes\n");
    scanf("%f", &Na);

    media =(Np+Nm+Nh+Nc+Nef+Na)/6;

    printf("O estudante %s do genero %c, estuda na escola %s na turma %i°%c e sua média deste bimestre foi %.2f.\n", nome, genero, escola, serie, turma, media);
    printf("Ele tem %i anos, mede %.2f metros e pesa %.1f kg.\n", idade, altura, peso);


    return 0;
}
