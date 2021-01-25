#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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
    input = getch();

    (fptr = fopen("C:\\Users\\Chope\\Desktop\\programacion\\Ejercicios-de-C\\money.txt","r"));
    fscanf(fptr,"%d", &saldo);

    switch (input)
    {
    //cerrar    
    case '0':
    end++;
    break;

    //extraccion
    case '1': 
        printf("\n\t\t\t\t Extraccion\n");
        printf("\nIngrese Monto de Extraccion: ");  
        scanf("%d", &montoE);
        if (montoE > saldo){
            printf("\nSaldo insuficiente\n");
            (fpa = fopen("C:\\Users\\Chope\\Desktop\\programacion\\Ejercicios-de-C\\ultmov.txt","a"));
            fprintf(fpa,"Extraccion fallida de %d", montoE);
        }else
        {
            (fpw = fopen("C:\\Users\\Chope\\Desktop\\programacion\\Ejercicios-de-C\\money.txt","w"));
            fprintf(fpw, "%d", saldo-montoE);
            printf("\n$%d Han sido extraidos\n", montoE);
            (fpa = fopen("C:\\Users\\Chope\\Desktop\\programacion\\Ejercicios-de-C\\ultmov.txt","a"));
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
            (fpa = fopen("C:\\Users\\Chope\\Desktop\\programacion\\Ejercicios-de-C\\ultmov.txt","a"));
            fprintf(fpa,"Transferencia fallida de %d", montoT);
        }else
        {
            printf("\n$%d Han sido transferidos\n", montoT);
            (fpw = fopen("C:\\Users\\Chope\\Desktop\\programacion\\Ejercicios-de-C\\money.txt","w"));
            fprintf(fpw, "%d", saldo-montoT);
            (fpa = fopen("C:\\Users\\Chope\\Desktop\\programacion\\Ejercicios-de-C\\ultmov.txt","a"));
            fprintf(fpa,"Transferencia de %d a CBU %d\n",montoT, cbu);
        }
        fclose(fpw);
        fclose(fpa);
        break;

    //consulta de saldo
    case '4':

    printf("%d", saldo);
    (fpa = fopen("C:\\Users\\Chope\\Desktop\\programacion\\Ejercicios-de-C\\ultmov.txt","a"));
    fprintf(fpa,"Consulta de saldo\n");
    fclose(fpa);
    fclose(fptr);
    break;

    default:
    return 0;
        break;
    }
    
    
    }
    return 0;
}
 