#include <stdio.h>
#include <stdlib.h>

int analisa_Vogal(char c)
{
    if(c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
    {
        return 1;
    }

    else 
        return 0;
}

int main()
{
    char c;
    c = getchar();

    printf("%d", analisa_Vogal(c));


    return 0;
}