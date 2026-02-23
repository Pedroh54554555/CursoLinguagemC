#include<stdio.h>
int main(){ 
    float temperatura, umidade;
    unsigned int estoque, estoqueMin = 1000;

    printf("A seguir insira as informações básicas do estoque.\n");
    printf("Insira a temperatura do local:\n");
    scanf("%f", &temperatura);

    printf("Insira o nível de úmidade do local:\n");
    scanf("%f", &umidade);

    printf("Digite quantos itens o armazem possui em estoque:\n");
    scanf("%u", &estoque);

    if(temperatura<28){
        if(temperatura>17){
            printf("A temperatura está adequada.\n");
        } else{
            printf("Atenção! A temperatura do local está abaixo dos parametros!\n");
        }
    } else{
        printf("Atenção! A temperatura do local está acima dos parametros!\n");
    }
    if(umidade<0.61){
        if(umidade>0.39){
            printf("A úmidade está adequada.\n");
        } else{
            printf("Atenção! A úmidade do local está abaixo dos parametros!\n");
        }
    } else{
        printf("Atenção! A úmidade do local está acima dos parametros!\n");
    }
       
    if(estoque>=estoqueMin){
        printf("Estoque dentro do esperado.");
    } else{
        printf("Estoque abaixo do esperado.");
    }
    

    return 0;

}