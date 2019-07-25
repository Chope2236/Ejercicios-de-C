#include <stdio.h>

int main(){
    int a,b;
    printf ("Ingrese Numero A:\n");
    scanf ("%d",&a);
    printf ("Ingrese Un Numero B:\n");
    scanf ("%d",&b);
    while (a == b){
        printf ("A y B no pueden ser iguales\n");
        printf ("Ingrese Otro Numero A:\n");
        scanf ("%d",&a);
        printf ("Ingrese Otro Numero B:\n");
        scanf ("%d",&b);
    
    }
    if (a > b){
        printf ("A es mayor que B");

    }
    if (b > a){
        printf ("B es mayor que A");
    }
}