#include <stdio.h>
#include <stdlib.h>

int calcular_Fatorial(int num)
{

    int fatorial = num;

    for(int i = 1; i < num; i++)
    {
        fatorial *= (num - i);

    }

    return fatorial;

}

int main()
{
    
    int num;

    printf("Quer o fatorial de qual numero: ");
    scanf("%d", &num);

    printf("\n%d! = %d\n", num, calcular_Fatorial(num));

    
    return 0;
}