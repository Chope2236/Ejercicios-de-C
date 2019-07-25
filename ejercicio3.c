#include <stdio.h>

int main(){
    int a;
    float qp;
    printf("Ingrese Numero:\n");
    scanf("%d",&a);
    printf("La Quinta Parte Es : %d\n",a/5);
    qp = a/5;
    printf("El Resto Es:%d\n",a%5);
    printf("La Septima Parte De La Quinta Parte Es:%f\n",qp/7) ;

}