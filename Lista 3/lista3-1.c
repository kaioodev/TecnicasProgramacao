#include <stdio.h>
#include <stdlib.h>

int analisa_Caractere(char c)
{
    if(!(c == 65 || c == 69 || c == 73 || c == 79 || c == 85) && (!(c == 97 || c == 101 || c == 105 || c == 111 || c == 117)) && ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
        return 1;
    

    else
        return 0;
    

}

int main()
{
    char caractere;
    caractere = getchar();

    printf("%d", analisa_Caractere(caractere));

    


    return 0;
}