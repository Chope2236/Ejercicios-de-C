#include <stdio.h>

int main(){
    int fecha=20190725;
    printf("El dia es:%d\n",fecha%100);
    printf("El mes es:%d\n",(fecha/100)%100);
    printf("El Anio es:%d\n",(fecha/10000)) ;

}