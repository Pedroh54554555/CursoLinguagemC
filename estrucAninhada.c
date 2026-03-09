#include<stdio.h>
int main(){
    int idade = 17;
    float renda = 2890.90;

    if (idade<18 || idade>60){
        if (renda < 3000){
            printf("Parabéns você irá ganhar um bônus!\n");
        } else{
            printf("Perdão você não atende aos rquisitos de renda para adiquirir o bônus.\n");
        }
    } else if(renda < 3000){
        printf("Perdão você não atende aos rquisitos de idade para adiquirir o bônus.\n");
    } else{
        printf("Perdão você não atende aos rquisitos de idade e renda para adiquirir o bônus.\n");
    }
}