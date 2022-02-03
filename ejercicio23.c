#include <stdio.h>


int main(){
    float minimodentroderango, n, minimopositivo=0, maximonegativo=0, suma;
    int cantidad = 0;
    printf("Ingrese numero: ");
    scanf("%f", &n);
    minimodentroderango = n;
    while (n != 0)
    {
        if (n > 0)
        {
            if (n <= minimopositivo || minimopositivo == 0)
            {
                minimopositivo = n;
            }
        }else{
            if (n >= maximonegativo || maximonegativo == 0)
            {
                maximonegativo = n;
            }
            
        }

    if (n >= -17.3 && n <= 26.9 && n <= minimodentroderango)
    {
       minimodentroderango = n;
    }

    printf("\nIngrese numero: ");
    scanf("%f", &n);
    }

    printf("\nMaximo negativo: %.1f", maximonegativo);
    printf("\nMinimo positivo: %.1f", minimopositivo);
    printf("\nValor minimo entre -17.3 y 26.9: %.1f", minimodentroderango);
    printf("\nEl promedio de todos los valores es %.1f", suma/cantidad);
}   