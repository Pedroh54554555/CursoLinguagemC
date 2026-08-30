#include<stdio.h>
# define linhas 4
# define colunas 31

int main(){
    char pessoas[linhas][colunas];
    for(int l = 0;l<linhas;l++){
        printf("Informe os seus dados na seguinte ordem:\nNome, Renda, Idade, Profissão.");
        scanf("%30s", pessoas[l]);
    }
    for(int n = 0; n<linhas; n++){
        printf("Conferência de dados %i:%s \n", n+1, pessoas[n]);
    }
    return 0;
}


