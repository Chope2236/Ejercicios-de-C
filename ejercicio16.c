#include <stdio.h>



int main(){
    int n, menorcien=0, menordiez=0, promedio, cant;
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese numero");
        scanf("%d", &n);
        if (n > 100)
        {
            cant++;
            menorcien = menorcien + n;
        }else{
            if (n < -10)
            {
                menordiez = menordiez + n;   
            }
            
        }
        
    }
    promedio = menorcien/cant;
    printf("El promedio de mayores a cien es :%d\n", promedio);
    printf("La suma de todos los menores a -10 es : %d", menordiez);
    
}