#include<stdio.h>

int main(){
    int num, resu;

    do{
        printf("Digite um número, em seguida te direi sua tabuada!\nDigite 0 para encerrar o programa!\n");
        scanf("%i", &num);
        printf("Tabuada do número %i:\n", num);
        if (num == 0){
            printf("Não Exite!\n");
            break;
        }
        for(int tabuada = 1; tabuada <= 10; tabuada ++){
            resu = num * tabuada;
            printf("%i x %i = %i\n", num, tabuada, resu);
        }
    }while (num);
    printf("Encerrando o programa.");

    return 0;
}