#include <stdio.h>


int main(){
    int num, subconjuntos = 0, suma, cantidad=0, mayor, subconjuntomayor, posicion = 0, posicionmayor;
    scanf("%d", &num);
    mayor = num;
    int menor = num;
    while (num >= 0)
    {
        posicion++;
        if (num >= mayor)
        {
            mayor = num;
            subconjuntomayor = subconjuntos;
            posicionmayor = posicion;
        }
        
        suma = suma + num;
        cantidad++;
        if (num < menor && num != 0)
        {
            menor = num;
        }
        
        if (num == 0)
        {
            subconjuntos++;
            posicion = 0;
            printf("El promedio de valores de el subconjunto %d es %d\n", subconjuntos+1, suma/cantidad);
            printf("El valor minimo del subconjunto %d es %d\n", subconjuntos+1, menor);
            suma = 0;
            cantidad = 0;
        }
        
        scanf("%d", &num);
    }
        printf("El numero maximo del conjunto es %d, se encontro en el subconjunto %d y en la posicion %d\n", mayor, subconjuntomayor+1, posicionmayor);
        printf("La cantidad de subconjuntos es: %d\n",subconjuntos+1);
}