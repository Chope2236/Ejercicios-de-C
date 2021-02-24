#include <stdio.h>

int main(){
    int a,b;
    printf ("Ingrese Numero A:\n");
    scanf ("%d",&a);
    printf ("Ingrese Un Numero B:\n");
    scanf ("%d",&b);
    while (a == b){
        printf ("A y B Son Iguales\n");
    }
    if (a > b){
        printf ("A es mayor que B");
    }
    else
    {
        printf ("B es mayor que A");
    }
}