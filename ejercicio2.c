#include <stdio.h>

int main(){
    int a,b;
    printf ("Elija Un Numero A:\n");
    scanf ("%d",&a);
    printf ("Elija Un Numero B:\n");
    scanf ("%d",&b);
    while (b == 0)
    {
        printf ("ERROR: B no puede ser 0\n");
        printf ("Ingrese Otro Numero B:");
        scanf ("%d",&b);
    }
    
    printf ("A/B Es = %d",a/b);
}