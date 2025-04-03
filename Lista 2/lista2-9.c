#include <stdio.h>
#include <stdlib.h>

int calcular_Regular(int num)
{
    if(num <= 0)
        return 0;

    while(num % 2 == 0)
        num = num /2;

    while(num % 3 == 0)
        num = num /3;

    while(num % 5 == 0)
        num = num /5;

    return num == 1;

    
}

int main()
{
    int num;

    printf("Qual numero deseja verificar? ");
    scanf("%d", &num);

    if(calcular_Regular(num) == 1)
        printf("%d esta dentre os numeros regulares", num);

    else    
        printf("%d nao esta dentre os numeros regulares", num);

    return 0;
}