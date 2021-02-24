#include <stdio.h>


int main(){
    int a,b;
    printf("Ingrese un numero (entero)\n");
    scanf("%d", &a);
    printf("Ingrese otro numero (entero)\n");
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
       if(i - b == -1){
           printf("%d = %d", a, a*b);
       }else{
           printf("%d + ", a);
       }
    }
    
    
}