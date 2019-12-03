#include <stdio.h>

int main(){
    int flagNoEsPrimo = 0;
    int numero,divisor;
    printf("Ingrese un numero\n");
    scanf("%d",&numero);

    for ( divisor = 2; divisor < numero; divisor++)
    {
        if (numero % divisor == 0 )
        {
            flagNoEsPrimo = 1;
        }
        
    }

    if(flagNoEsPrimo == 1){
        printf("No es primo\n");
    }else{
        printf("Es primo\n");
    }
    

    
    
    system("pause");
}