#include<stdio.h>
int main(){
     int n1 = 4, n2 = 6;
     printf("n1<n2: %d\n", n1<n2);
     printf("n1>n2: %d\n", n1>n2);
     printf("n1==n2: %d\n", n1==n2);
     printf("n1!=n2: %d\n", n1!=n2);
     
     printf("Novo teste!\n");
     float n3 = 4.0, n4 = 8.0;
     printf("n3==n1: %d\n", n3==n1);
     printf("n3!=n1: %d\n", n3!=n1);
     printf("n4==2*n1: %d\n", n4==2*n1);
     printf("n4==2*n2: %d\n", n4==2*n2);

     printf("Outro teste!\n");
     char c1 = 'r', c2 = 'a';
     printf("Na tabela ASCII, o valor de c1 é %d e o valor de c2 é %d\n", c1, c2);
     printf("c1>c2: %d\n", c1>c2);
     return 0;
}