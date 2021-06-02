#include <stdio.h>
#include <string.h>


int main(){

    int tInfr, valor=0, G=0, L=0, M=0, total=0, ultvalor=0, mot=0;
    char gravedad;
    char motivo[100];

    printf("Ingrese Tipo de Infraccion: ");
    scanf("%d", &tInfr);
    while (tInfr != 0)
    {
        printf("\nIngrese Motivo de la infraccion: ");
        scanf("% [^\n]s", &motivo);
        fgets(motivo, 100, stdin);
        printf("%s", motivo);
        printf("\nIngrese Valor de la multa: ");
        scanf("%d", &valor);
        if (valor < ultvalor)
        {
            mot++;
        }
        
        total = valor+total;
        ultvalor = valor;
        printf("\nIngrese gravedad de la infraccion: ");
        scanf("%s", &gravedad);
        if (gravedad == 'G')
        {
            G++;
        }
            printf("\nIngrese Tipo de Infraccion: ");
            scanf("%d", &tInfr);
        }
        printf("\nEl valor total es %d", total);
        if (G >= 3)
        {
            printf("\nClausurar fabrica");
        }
        if (mot != 0)
        {
            printf("\nEl motivo de la infraccion de menor valor es '%s' ", motivo);
        }
        
        
    }