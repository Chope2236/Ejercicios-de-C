#include <stdio.h>


int main(){
int last, biggest=0;


for (int i = 0; i < 10; i++)
{
    printf("Write a number: \n");
    scanf("%d", &last);
    if(last > biggest){
        biggest = last;
    }
}
printf("%d", biggest);
}