#include<stdio.h>

int main(){
    char nome[50], genero, curso[20];
    int idade, tempo_curso, telefone;

    printf("\nDigite seu nome:\n");
    scanf(" %[^\n]", nome);

    printf("\nDigite seu genero (M/F):\n");
    scanf(" %c", &genero);

    printf("\nDigite a sua idade:\n");
    scanf("%i", &idade);

    printf("\nDigite o nome do seu curso:\n");
    scanf("\n %[^\n]", curso);

    printf("\nDigite o tempo do curso em anos:\n");
    scanf("%i", &tempo_curso);

    printf("\nDigite seu telefone: para contato:\n");
    scanf("%i", &telefone);

    printf("\nNome: %s\nGenero: %c\nIdade: %i\nCurso: %s\nTempo de curso: %i anos\nTelefone para contato: %i\n", nome, genero, idade, curso, tempo_curso, telefone);

    return 0;

}