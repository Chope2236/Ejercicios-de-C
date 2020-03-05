#include <stdio.h>

int main(){
    int flagEsPrimo = 0;
    int numero,divisor;
    printf("Ingrese un numero\n");
    scanf("%d",&numero);

    for ( divisor = 2; divisor < numero; divisor++,numero++)
    {
        if (numero % divisor >= 1 )
        {
            flagEsPrimo = 1;
        }
        
    }

    if(flagEsPrimo == 1){
        printf("es primo\n");
    }
    

    
    
    system("pause");
}