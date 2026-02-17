#include<stdio.h>
int main(){

    int n1 =-1;
    int n2 =0;
    int n3 =0;


    if(n1==n2){
        if(n1==n3){
            printf("Os três possuem o mesmo valor!");
        } else{
            if (n1>n3){
                printf("n1 e n2 são os maiores!");
            } else{
                printf("n3 possue o maior valor!");
            }
        }
    } else{
        if(n1==n3){
            if(n1>n2){
                printf("n1 e n3 são os maiores!");
            } else{
                printf("n2 possue o maior valor");
            }
        } else{
            if(n1>n2){
                if(n1>n3){
                    printf("n1 possue o maior valor!");
                } else{
                    printf("n3 possue o maior valor!");
                }
            } else{
                if(n2==n3){
                    printf("n2 e n3 são os maiores!");
                } else{
                    if(n2>n3){
                        printf("n2 possue o maior valor!");
                    } else{
                        printf("n3 possue o maior valor!");
                    }
                }
            }
        }
    }

    return 0;
}