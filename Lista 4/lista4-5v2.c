#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <math.h>

int conversor_StringInt(char *str)
{
    int tamanho = strlen(str), i;
    int multiplicador = 1, soma = 0;

 
    for(i = tamanho - 1; i >= 0; i--)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            soma = soma + (str[i] - '0') * multiplicador;
            multiplicador *= 10;

        }  

    }

    return soma;

}


int main()
{
    char string[50];
    
    printf("Digite uma string de caracters numericos: \n>>");
    scanf("%49[^\n]", string);
    
    int resultado = conversor_StringInt(string);
    printf("Numero convertido: %d", resultado - 1);
    
    return 0;
}

