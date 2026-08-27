#include<stdio.h>

int main(){
    int a =5, b = 5, c = 2;

    a>b && a>c ? printf("A variável 'a' é a maior!") : printf("") ;
    b>a && b>c ? printf("A variável 'b' é a maior!") : printf("") ;
    c>a && c>b ? printf("A variável 'c' é a maior!") : printf("") ;
    a==b && a>c ? printf("As variáveis 'a e b' são as maiores!") : printf("") ;
    a==c && a>b ? printf("As variáveis 'a e c' são as maiores!") : printf("") ;
    b==c && b>a ? printf("As variáveis 'b e c' são as maiores!") : printf("") ;
    a==b && a==c ? printf("O valor de todas as variáveis é o mesmo!") : printf("") ;

    return 0;
}