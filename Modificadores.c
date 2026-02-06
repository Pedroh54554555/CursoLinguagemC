#include<stdio.h>
int main(){

    printf("Trabalhando com unsigned int!\n");
    int valor_comSinal = 4294967295;
    unsigned int valor_semSinal = 3000000000;

    printf("O primeiro valor é: %i\n", valor_comSinal);
    printf("O segundo valor é: %u\n", valor_semSinal);

    printf("Trabalhando com long int e long double!\n");
    int valorMaximo_normal = 2147483647;
    long int valorMaximo_long = 9223372036854775807;
    
    printf("O primeiro valor é: %i\n", valorMaximo_normal);
    printf("O segundo valor é: %li\n", valorMaximo_long);

    printf("Trabalhando com short int!\n");
    short int valorMaximo_short = 32767;
    
    printf("O valor máximo de short int é: %i\n", valorMaximo_short);

    return 0;
}