#include <stdio.h>

int main(){
    int menu, fuerza, trabajo, distancia, potencia, tiempo;

    printf("Antes que nada, definamos unos conceptos basicos\n");
    printf("Trabajo = Fuerza*Distancia\n");
    printf("Potencia = Trabajo/tiempo\n");
    printf("1 Watt = 745 HP\n\n\n\n\n\n");
    printf("1. Calcular potencia\n");
    menu = getch();
    switch (menu)
    {
    case '1':
        printf("Ingrese Fuerza en Kilogramos: \n");
        scanf("%d", &fuerza);
        printf("Ingrese Distancia en Metros:\n");
        scanf("%d", &distancia);
        printf("Ingrese tiempo en Segundos: \n");
        scanf("%d", &tiempo);
        trabajo = (fuerza*distancia)*9.8;
        potencia = trabajo/tiempo;
        printf("La energia necesaria es de %d Joules\n", trabajo);
        printf("La potencia es de %d Watts\n", potencia);
        break;

    default:
        break;
    }
}