#include <stdio.h>
#include <stdlib.h>

int contador_Caracteres(char *str) //poderia ter usado strlen, mas ja que criei minha propria funçao... kkkkkkk
{
    int i = 0, quantidade = 0;

    while(str[i] != '\0')
    {
        quantidade++;
        i++;
    }

    return quantidade;

}


//

char *corrige_Strings(char *string)//funciona apenas para espaços ;( 
{
    int i = 0, j = 0, tamanhoString = contador_Caracteres(string);
    char *stringCorrigida = malloc((tamanhoString + 1) * sizeof(char)); //aloca quantidade de chars que o tamanho da string recebida do main tem e +1 (\0);
    int tam = tamanhoString - 1; //-1 do '\0'

    while(string[j] == ' ')//verifica os espaços do inicio
    {
        j++;
    }


    while(string[tam] == ' ') //verifica os espaços do final
    {
        tam--;
    }

    int TamanhoDefinitivo = tam - j + 1;  //calculo de caracteres validos da string(sem espaços iniciais e finais), o + 1 é o /0 do final da string.

    for(i = 0; i < TamanhoDefinitivo; i++)// rescreve a string sem os espaços iniciais e finais.
    {
        stringCorrigida[i] = string[i+j];// i + j pois é quando começam os caracteres validos :)

    }

    stringCorrigida[TamanhoDefinitivo] = '\0'; //estava imprimindo lixo de memoria onde nao devia imprimir nada, era o \0...

    return stringCorrigida;
}

int main()
{
    char str[50];

    printf("Insira uma string: \n>>");

    scanf("%49[^\n]", str); //gambiarra? funciona...

    printf("\nString antiga: [%s]\n", str);

   
    printf("String corrigida: [%s]", corrige_Strings(str));


    return 0;
}