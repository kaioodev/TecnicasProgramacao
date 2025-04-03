#include <stdio.h>
#include <stdlib.h>

char **quebra_String(char *string, char caractere, int *N)
{
    int i, inicial = 0, j = 0, k = 0;
    *N = 1;

    for(i = 0; string[i]; i++){

        if(string[i] == caractere)
        {
            (*N)++;
        }
    }

    char ** V = malloc(sizeof(char*) * (*N));

    for(i = 0; string[i]; i++)
    {
        if(string[i] == caractere)
        {

            V[j] = malloc(sizeof(char) * (i-inicial + 1));

            for(k = 0; inicial < i; k++){
            
                V[j][k] = string[inicial];

                inicial++;

            }

            V[j][k] = '\0';

            inicial = i + 1;
            j++;

        }

    }

    V[j] = malloc(sizeof(char) * (i-inicial + 1));

    for(k = 0; inicial < i; k++){
    
        V[j][k] = string[inicial];

        inicial++;

    }

    V[j][k] = '\0';

    return V;

}

int main()
{
    char string[101];
    char caractere;
    int N;
    
    scanf("%100[^\n]", string);
    getchar();
    scanf("%c", &caractere);
    
    char ** V = quebra_String(string, caractere, &N);

    for(int i = 0; i < N; i++)
    {
        printf("%s\n", V[i]);
    }
    
    return 0;
}