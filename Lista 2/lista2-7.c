#include <stdio.h>
#include <stdlib.h>

int verificar_Primos(int num)
{

    int i;

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
        if (i == num)
            return 1;

}

int main()
{
    
        int numero;

        printf("\nQuer verificar qual numero? ");
        scanf("%d", &numero);

        if(verificar_Primos(numero) == 1)
            printf("Primo\n");

        else 
            printf("Nao primo\n");

        
    
    
    return 0;
}