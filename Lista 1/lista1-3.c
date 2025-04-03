#include <stdio.h>
#include <stdlib.h>

void desenha_retangulo_solido(int linha, int coluna, char caractere)
{
    int i, j;

    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {
            printf("%c", caractere);
        }
        printf("\n"); 
    }
}

int main()
{
    int linha, coluna;
    char caractere;

    printf("Linhas: ");
    scanf("%d", &linha);
    printf("Colunas: ");
    scanf("%d", &coluna);

    printf("E qual o caractere do retangulo? ");
    scanf(" %c", &caractere); 
    printf("\n");

    desenha_retangulo_solido(linha, coluna, caractere);

    return 0;
}
