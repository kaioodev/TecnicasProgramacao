#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenar_Strings(char *str1, char *str2)
{

    int tamanho1 = strlen(str1), tamanho2 = strlen(str2);
    int tamanhoTotal = tamanho1 + tamanho2, i = 0, j = 0;
    char *stringConcatenada = malloc((tamanhoTotal + 1) * sizeof(char));

    while(str1[i] != '\0')
    {

        stringConcatenada[i] = str1[i];
        i++;

    }

    while(str2[j] != '\0')
    {

        stringConcatenada[i] = str2[j];

        i++;
        j++;

    }

    stringConcatenada[i] = '\0';

    return stringConcatenada;

}


int main()
{

    char string1[50], string2[50];

    printf("Digite a primeira string: \n>>");
    scanf("%49[^\n]", string1);

    getchar();

    printf("Digite a segunda string: \n>>");
    scanf("%49[^\n]", string2);

    printf("String concatenada: %s", concatenar_Strings(string1, string2));

    return 0;

}