#include <stdio.h>
#include <stdlib.h>

 void linha2_function(char caractere)
{
    int i;
  
    for(i = 0; i < 25; i++)
    {
        printf("%c", caractere);
        if(i == 24)
        {
            printf("\n");
        }
    }
}

int main()
{
    char caractere;
    
    linha2_function(caractere = '*'); //poderia deixar o usuario escolher
    printf("CMP 1048\n");
    linha2_function(caractere = '@');
    printf("Tecnicas de Programacao\n");
    linha2_function(caractere = '+');

    return 0;
}