#include <stdio.h>

int main(){
    int n, nl, mayor=0, menor=0, posma, posme;
    printf("Cuantos numeros quiere ingresar?: \n");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &nl);
        if (i==1)
        {
            menor = nl;
        }   
        if (nl > mayor)
            {
                mayor = nl;
                posma = i;
            }else{
                    if (nl < menor)
                    {
                        menor = nl;
                        posme = i;
                    }
                 }
    }
    printf("El numero mas grande fue: %d, se ingreso en la posicion %d\n", mayor, posma);
    printf("Y el mas chico fue: %d, se ingreso en la posicion %d\n", menor, posme);
}