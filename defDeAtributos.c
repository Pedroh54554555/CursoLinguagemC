#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int atributos = 14, ataque = 1, defesa = 1, vida = 1, precisão = 1, esquiva = 1, estamina = 1, random =0;
    srand(time(0));
    while (atributos>0){
            random= rand()% 2;
            if (random>0){
                if(ataque<5){
                    ataque ++;
                    atributos --;
                }
            }
            if (atributos==0){
                break;
            }
            random= rand()% 2;
            if (random>0){
                if(defesa<5){
                    defesa ++;
                    atributos --;
                }
            }
            if (atributos==0){
                break;
            }
            random= rand()% 2;
            if (random>0){
                if (vida<5){
                    vida ++;
                    atributos --;
                }
            }
            if (atributos==0){
                break;
            }
            random= rand()% 2;
            if (random>0){
                if (precisão<5){
                    precisão ++;
                    atributos --;
                }
            }
            if (atributos==0){
                break;
            }
            random= rand()% 2;
            if (random>0){
                if (esquiva<5){
                    esquiva ++;
                    atributos --;
                }
            }
            if (atributos==0){
                break;
            }
            random= rand()% 2;
            if (random>0){
                if (estamina<5){
                    estamina ++;
                    atributos --;
                }
            }
            if (atributos==0){
                break;
            }
    }

    printf("O resultado final dos atributos ficou:\nAtaque: %i\nDefesa: %i\nVida: %i\nPrecisão: %i\nEsquiva: %i\nEstamina:%i\n", ataque, defesa, vida, precisão, esquiva, estamina);

}