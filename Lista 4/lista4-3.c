#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar_Strings( char *str1, char *str2)
{
    int i;
    int tam = strlen(str1), tam2 = strlen(str2), tamDefinitivo;

    if(tam > tam2)
        tamDefinitivo = tam;

    else
        tamDefinitivo = tam2;


    for(i = 0; i <= tamDefinitivo; i++)
    {
        if(str1[i] > str2[i])
        {
            return -1;

        }

        else if(str1[i] < str2[i])
            return 1;

    }
    


    return 0;


}

int main()
{
    char string1[50], string2[50];

    printf("Digite a primeira string: \n>>");
    scanf("%49[^\n]", string1);
    getchar();

    printf("Digite a segunda string: \n>>");
    scanf("%49[^\n]", string2);

    printf("%d", comparar_Strings(string1, string2));

    



    
    return 0;
}