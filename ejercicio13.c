#include <stdio.h>

int main(){
    int num;
    printf("Ingrese un numero:\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (i == num)
        {
            return 0;
        }else
        {
            printf("%d\n", i);
        }
        
        
    }
    
}