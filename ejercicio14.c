#include <stdio.h>


int main(){
    int a,b,c;
    printf("Ingrese un numero (entero)\n");
    scanf("%d", &a);
    printf("Ingrese otro numero (entero)");
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        c = c + a;
        printf("%d\n", c);

    }
    
    
}