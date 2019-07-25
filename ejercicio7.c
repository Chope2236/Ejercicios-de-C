#include <stdio.h>

int main(){
    int anio,mes,dia;
    printf("Ingrese El Dia:\n");
    scanf("%d",&dia);
    printf("Ingrese El Mes:\n");
    scanf("%d",&mes);
    printf("Ingrese Anio\n");
    scanf("%d",&anio);
    printf("La Fecha Es : %d",anio*10000+(mes*100)+dia);
}