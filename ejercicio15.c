#include <stdio.h>

int main(){

       int n, r=1;
       printf("Ingrese numero para calcular factorial\n");
       scanf("%d", &n);


       for (int i = 1; i < n+1; i++)
       {
          r = r*i;
          printf("%d\n", r);
       }

       
}