#include<stdio.h>
 int main(){
    int np, nm, nh, ng, nc, nef, na;
    float media;

    printf("Insira a nota de português do aluno:\n");
    scanf("%i", &np);

    printf("Insira a nota de matemática do aluno:\n");
    scanf("%i", &nm);

    printf("Insira a nota de hitória do aluno:\n");
    scanf("%i", &nh);

    printf("Insira a nota de geografia do aluno:\n");
    scanf("%i", &ng);

    printf("Insira a nota de ciências do aluno:\n");
    scanf("%i", &nc);

    printf("Insira a nota de educação física do aluno:\n");
    scanf("%i", &nef);

    printf("Insira a nota de artes do aluno:\n");
    scanf("%i", &na);

    media = + (float)(np + nm + nh + ng + nef + na + nc)/7;

    if (media >= 5){
        printf("O aluno passou de ano!\n");
        printf("Sua média foi: %.2f\n", media);
    }else {
        printf("Infelizmente o aluno precisa recuperar a sua nota.\n");
        printf("Sua média foi: %.2f\n", media);
    }

    return 0;
    
 }
 