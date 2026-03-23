#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    //Declaração das 3 variáveis Número escolhido, Adivinhação e Diferença dos valores um de cada para o Computador e o Player. 
    int NumP, NumC, AdiP, AdiC, DifP, DifC;

    srand(time(0));
    NumC = (rand()%100) + 1;
    AdiC = (rand()%100) + 1;

    printf("Bem vindo ao jogo da adivinhação!\nAs regras são simples, escolha um número de 1 à 100.\nO computador também irá definir um número!\nEm seguida ambos deverão tentar adivinhar o número do oponente.\nVence quem chegar mais perto do número!\n");
    printf("Digite seu número:\n");
    scanf("%i", &NumP);
    printf("Agora digite qual número você acha que o seu adversário colocou:\n");
    scanf("%i", &AdiP);

    DifP = NumC - AdiP;
    if (DifP < 0){
        DifP = -DifP;
    }


    DifC = NumP - AdiC;
    if (DifC < 0){
        DifC = -DifC;
    }
    int dif;    
    if (DifP<=DifC){
        if(DifP == DifC){
        printf("Houve um empate!\nA seguir os valores do oponente.\nNúmero: %i\nChute: %i\n", NumC, AdiC);
        } else{dif = DifC - DifP;
        printf("Você venceu por: %i!\nA seguir os valores do oponente.\nNúmero: %i\nChute: %i\n", dif, NumC, AdiC);
        }
    } else{
        dif = DifP - DifC;
        printf("Você perdeu por: %i!\nA seguir os valores do oponente.\nNúmero: %i\nChute: %i\n", dif, NumC, AdiC);
    }

    return 0;
}