#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int consulta(char *nombrearchivo);

int main(){
    

    FILE *fptr, *fpw, *fpa;

    int end = 0;
    while (end != 1)
    { 
    int input, montoE, montoT, cbu, saldo;
    printf("\n1. Extraccion\n");
    printf("\n2. Transferencia\n");
    printf("\n3. Ultimos Movimientos\n");
    printf("\n4. Consulta de Saldo\n");
    saldo = consulta("money.txt");

    input = getch();
    switch (input)
    {
    //cerrar    
    case '0':
    end=1;
    break;

    //extraccion
    case '1': 
        printf("\n\t\t\t\t Extraccion\n");
        printf("\nIngrese Monto de Extraccion: ");  
        scanf("%d", &montoE);
        if (montoE > saldo){
            printf("\nSaldo insuficiente\n");
            (fpa = fopen("ultmov.txt","a"));
            fprintf(fpa,"Extraccion fallida de %d\n", montoE);
        }else
        {
            (fpw = fopen("money.txt","w"));
            fprintf(fpw, "%d", saldo-montoE);
            printf("\n$%d Han sido extraidos\n", montoE);
            (fpa = fopen("ultmov.txt","a"));
            fprintf(fpa,"Extraccion de %d\n", montoE);
        }
        fclose(fpw);
        fclose(fpa);
        break;
    //transferencia
    case '2':
        printf("\n\t\t\t\t Transferencia\n");
        printf("\nIngrese CBU: \n");
        scanf("%d", &cbu);
        printf("\nIngrese monto a transferir:  \n");
        scanf("%d", &montoT);
        if(montoT > saldo){
            printf("\nSaldo insuficiente\n");
            (fpa = fopen("ultmov.txt","a"));
            fprintf(fpa,"Transferencia fallida de %d\n", montoT);
        }else
        {
            printf("\n$%d Han sido transferidos\n", montoT);
            (fpw = fopen("money.txt","w"));
            fprintf(fpw, "%d", saldo-montoT);
            (fpa = fopen("ultmov.txt","a"));
            fprintf(fpa,"Transferencia de %d a CBU %d\n",montoT, cbu);
        }
        fclose(fpw);
        fclose(fpa);
        break;

    //consulta de saldo
    case '4':
    saldo = consulta("money.txt");
    printf("%d", saldo);
    fpa = fopen("ultmov.txt","a");
    fprintf(fpa,"Consulta de saldo\n");
    fclose(fpa);
    break;

    default:
    return 0;
        break;
    }
    
    
    }
    return 0;
}


int consulta(char *nombrearchivo){
    int saldo_interno;
    FILE *fptr = fopen(nombrearchivo,"r");
    fscanf(fptr,"%d", &saldo_interno);
    fclose(fptr);
    return(saldo_interno);
}
  