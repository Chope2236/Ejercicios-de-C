#include <stdio.h>

int main(){
    int a,b,c;
    printf("Ingrese Un Numero A:\n");
    scanf("%d",&a);
    printf("Ingrese Un Numero B:\n");
    scanf("%d",&b);
    printf("Ingrese Un Numero C:\n");
    scanf("%d",&c);
    if ((a == b) && (b == c)){
        printf ("Los tres numeros son iguales\n");
    }
    else{
    if (a > b){
        if (a > c){
            printf("A es el mayor\n");
            if (b > c){
                printf("B es el del medio\n");
                printf("C es el menor\n");
            }
            else{
                if (b == c){
                    printf("B y C son iguales\n");
                }
                else{
                printf("C es el del medio\n");
                printf("B es el menor\n");
                }
            }
        }
        else{
            if (a == c){
                printf("A y C son iguales");
                printf("B es el menor");
            }
            else{
            printf("C es el mayor\n");
            printf("A es el del medio\n");
            printf("B es el menor\n");
            }
        }
    }
    else{
        if (b > c){
            if (a > c){
                printf("A es el del medio\n");
                printf("C es el menor\n");
            }
            else{
                if (a == c){
                    printf("B es el mayor\n");
                    printf("A y C son iguales\n");
                }
                else{
                printf("C es el del medio\n");
                printf("A es el menor\n");
                }
            }
        }
        else {
            printf("C es el mayor\n");
            if (a == b){
                printf("A y B son iguales\n");
            }
            else {
                printf("B es el del medio\n");
                printf("A es el menor\n");
            }
            }
        }
    }
    }