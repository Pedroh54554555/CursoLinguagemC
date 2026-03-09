#include<stdio.h>
#include<stdlib.h>
#include<time.h>    

int main(){
    int dado1, dado2, dado3, dado4, dado5, valordado, quantdados;
    srand(time(0));
    dado1 = rand();
    dado2 = rand();
    dado3 = rand();
    dado4 = rand();
    dado5 = rand();

    printf("Bem-vindo ao sistema de dados para RPG!\nA seguir você irá decidir qual o tipo de dado que deseja rolar:\nDigite 1 para rolar um d3.\nDigite 2 para rolar um d4.\nDigite 3 para rolar um d6.\nDigite 4 para rolar um d8.\nDigite 5 para rolar um d10.\nDigite 6 para rolar um d12.\nDigite 7 para rolar um d20.\nDigite 8 para rolar um d24.\nDigite 9 para rolar um d100.\n"); 
    scanf("%i", &valordado);
    
    switch (valordado)
    {
    case 1:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);
        switch (quantdados)
        {
        case 1:
            dado1 = (rand() % 3) + 1;
            dado2 = (rand() % 3) + 1;
            dado3 = (rand() % 3) + 1;
            dado4 = (rand() % 3) + 1;
            dado5 = (rand() % 3) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            dado1 = (rand() % 3) + 1;
            dado2 = (rand() % 3) + 1;
            dado3 = (rand() % 3) + 1;
            dado4 = (rand() % 3) + 1;
            dado5 = (rand() % 3) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            dado1 = (rand() % 3) + 1;
            dado2 = (rand() % 3) + 1;
            dado3 = (rand() % 3) + 1;
            dado4 = (rand() % 3) + 1;
            dado5 = (rand() % 3) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            dado1 = (rand() % 3) + 1;
            dado2 = (rand() % 3) + 1;
            dado3 = (rand() % 3) + 1;
            dado4 = (rand() % 3) + 1;
            dado5 = (rand() % 3) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            dado1 = (rand() % 3) + 1;
            dado2 = (rand() % 3) + 1;
            dado3 = (rand() % 3) + 1;
            dado4 = (rand() % 3) + 1;
            dado5 = (rand() % 3) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;
        case 2:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);
        switch (quantdados)
        {
        case 1:
            dado1 = (rand() % 4) + 1;
            dado2 = (rand() % 4) + 1;
            dado3 = (rand() % 4) + 1;
            dado4 = (rand() % 4) + 1;
            dado5 = (rand() % 4) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            dado1 = (rand() % 4) + 1;
            dado2 = (rand() % 4) + 1;
            dado3 = (rand() % 4) + 1;
            dado4 = (rand() % 4) + 1;
            dado5 = (rand() % 4) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            dado1 = (rand() % 4) + 1;
            dado2 = (rand() % 4) + 1;
            dado3 = (rand() % 4) + 1;
            dado4 = (rand() % 4) + 1;
            dado5 = (rand() % 4) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            dado1 = (rand() % 4) + 1;
            dado2 = (rand() % 4) + 1;
            dado3 = (rand() % 4) + 1;
            dado4 = (rand() % 4) + 1;
            dado5 = (rand() % 4) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            dado1 = (rand() % 4) + 1;
            dado2 = (rand() % 4) + 1;
            dado3 = (rand() % 4) + 1;
            dado4 = (rand() % 4) + 1;
            dado5 = (rand() % 4) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;
        case 3:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);

        switch (quantdados)
        {
        case 1:
            dado1 = (rand() % 6) + 1;
            dado2 = (rand() % 6) + 1;
            dado3 = (rand() % 6) + 1;
            dado4 = (rand() % 6) + 1;
            dado5 = (rand() % 6) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            dado1 = (rand() % 6) + 1;
            dado2 = (rand() % 6) + 1;
            dado3 = (rand() % 6) + 1;
            dado4 = (rand() % 6) + 1;
            dado5 = (rand() % 6) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            dado1 = (rand() % 6) + 1;
            dado2 = (rand() % 6) + 1;
            dado3 = (rand() % 6) + 1;
            dado4 = (rand() % 6) + 1;
            dado5 = (rand() % 6) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            dado1 = (rand() % 6) + 1;
            dado2 = (rand() % 6) + 1;
            dado3 = (rand() % 6) + 1;
            dado4 = (rand() % 6) + 1;
            dado5 = (rand() % 6) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            dado1 = (rand() % 6) + 1;
            dado2 = (rand() % 6) + 1;
            dado3 = (rand() % 6) + 1;
            dado4 = (rand() % 6) + 1;
            dado5 = (rand() % 6) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;
        case 4:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);

        switch (quantdados)
        {
        case 1:
            dado1 = (rand() % 8) + 1;
            dado2 = (rand() % 8) + 1;
            dado3 = (rand() % 8) + 1;
            dado4 = (rand() % 8) + 1;
            dado5 = (rand() % 8) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            dado1 = (rand() % 8) + 1;
            dado2 = (rand() % 8) + 1;
            dado3 = (rand() % 8) + 1;
            dado4 = (rand() % 8) + 1;
            dado5 = (rand() % 8) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            dado1 = (rand() % 8) + 1;
            dado2 = (rand() % 8) + 1;
            dado3 = (rand() % 8) + 1;
            dado4 = (rand() % 8) + 1;
            dado5 = (rand() % 8) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            dado1 = (rand() % 8) + 1;
            dado2 = (rand() % 8) + 1;
            dado3 = (rand() % 8) + 1;
            dado4 = (rand() % 8) + 1;
            dado5 = (rand() % 8) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            dado1 = (rand() % 8) + 1;
            dado2 = (rand() % 8) + 1;
            dado3 = (rand() % 8) + 1;
            dado4 = (rand() % 8) + 1;
            dado5 = (rand() % 8) + 1;
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;
        case 5:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);
        dado1 = (rand() % 10) + 1;
        dado2 = (rand() % 10) + 1;
        dado3 = (rand() % 10) + 1;
        dado4 = (rand() % 10) + 1;
        dado5 = (rand() % 10) + 1;
        switch (quantdados)
        {
        case 1:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;
        case 6:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);
        dado1 = (rand() % 12) + 1;
        dado2 = (rand() % 12) + 1;
        dado3 = (rand() % 12) + 1;
        dado4 = (rand() % 12) + 1;
        dado5 = (rand() % 12) + 1;
        switch (quantdados)
        {
        case 1:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;
    case 7:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);
        dado1 = (rand() % 20) + 1;
        dado2 = (rand() % 20) + 1;
        dado3 = (rand() % 20) + 1;
        dado4 = (rand() % 20) + 1;
        dado5 = (rand() % 20) + 1;
        switch (quantdados)
        {
        case 1:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;
        case 8:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);
        dado1 = (rand() % 24) + 1;
        dado2 = (rand() % 24) + 1;
        dado3 = (rand() % 24) + 1;
        dado4 = (rand() % 24) + 1;
        dado5 = (rand() % 24) + 1;
        switch (quantdados)
        {
        case 1:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;
    case 9:
        printf("Quantos dados você deseja rolar? Máximo 5\n");
        scanf("%i", &quantdados);
        dado1 = (rand() % 100) + 1;
        dado2 = (rand() % 100) + 1;
        dado3 = (rand() % 100) + 1;
        dado4 = (rand() % 100) + 1;
        dado5 = (rand() % 100) + 1;
        switch (quantdados)
        {
        case 1:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\n", dado1);
            break;
        case 2:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\n", dado1, dado2);
            break;
        case 3:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
            break;
        case 4:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\n", dado1, dado2, dado3, dado4);
            break;
        case 5:
            printf("A seguir os resultados da rolagem:\nDado 1: %i\nDado 2: %i\nDado 3: %i\nDado 4: %i\nDado 5: %i\n", dado1, dado2, dado3, dado4, dado5);
            break;  

        default:
            printf("Valor invalido");
            break;
        }
        
        break;

    default:
        printf("Valor invalido");
        break;
    }

    return 0;
}