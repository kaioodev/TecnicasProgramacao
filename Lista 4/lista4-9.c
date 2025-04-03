#include <stdio.h>
#include <stdlib.h>

char *soma_numeros_gigantes(char* str1, char* str2)
{

    int tamanho1 = strlen(str1), tamanho2 = strlen(str2), tamanhoDefinitivo;
    int i, j;


    if(tamanho1 > tamanho2)
        tamanhoDefinitivo = tamanho1;

    else
        tamanhoDefinitivo = tamanho2;

    tamanhoDefinitivo++;


    char *resultado = malloc(sizeof(char) * (tamanhoDefinitivo));

    int aux = 0;
    char num1 = str1[tamanho1-1], num2 = str2[tamanho2-1];


    resultado[tamanhoDefinitivo] = '\0';

    while(tamanho1 - 1 >= 0 || tamanho2 - 1 >= 0) 
    {

        aux = num1 + num2 - ('0' * 2);


        resultado[tamanhoDefinitivo-1] = (aux % 10) + '0';
        resultado[tamanhoDefinitivo-2] = (aux/10) + '0'; 

        tamanhoDefinitivo--;
        
        if(tamanho2 > 0)
        {

            tamanho2--; 
            num2 = str2[tamanho2];
        }

        else
        {
            num2 = '0';
        }

        if(tamanho1 > 0)
        {

            tamanho1--; 
            num1 = str1[tamanho2];
        }

        else
        {
            num1 = '0';
        }

    }

    if(resultado[0] == '0')
        return resultado+1;

    else   
        return resultado;

}

int main()
{
    char *resultado;
    char str1[101], str2[101];

    scanf("%100[^\n]", str1);
    getchar();
    scanf("%100[^\n]", str2);

    resultado = soma_numeros_gigantes(str1, str2);

    printf("%s", resultado);

    


    return 0;
}