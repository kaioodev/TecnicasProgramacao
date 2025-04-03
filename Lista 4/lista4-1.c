#include <stdio.h>
#include <stdlib.h>

int contador_Caracteres(char *str)
{
    int i = 0, quantidade = 0;

    while(str[i] != '\0')
    {
        quantidade++;
        i++;
    }

    return quantidade;

}

int main()
{
    char str[50];
    printf("Digite uma string: ");
    scanf("%49[^\n]", str);

    printf("Quantidade de caracteres na string \"%s\": %d",str, contador_Caracteres(str));


    return 0;
}