#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *altera_String(char *str)
{
    int tam = strlen(str);
    char *novaString = malloc(sizeof(char) * tam);
    int i;

    for(i = 0; i < tam; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')//depois do exercicio dirigido isso faz bastante sentido
        {
            novaString[i] = str[i] + 32;
        }

        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            novaString[i] = str[i] - 32;
        }

        else
        {
            novaString[i] = str[i];
        }


    }

    novaString[tam] = '\0'; 
    return novaString;


}

int main()
{
    char string[51];

    scanf("%[^50\n]", string);

    printf("Entrada: %s", string);
    printf("\nSaida: %s", (altera_String(string)));


    return 0;
}