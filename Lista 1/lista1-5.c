#include <stdio.h>
#include <stdlib.h>

void desenha_retangulo(int quantidade, char caracter){
    for ( int i = 1; i <= quantidade; i++)
    {
        printf("%c", caracter);
    }
}

int main()
{
    int linha, coluna;
    char caractere, caractere2;
    int i = 1;
    
    printf("Linhas: ");
    scanf("%d", &linha);
    printf("\nColunas: ");
    scanf("%d", &coluna);
    printf("\nCaractere: ");
    scanf(" %c", &caractere);
    printf("\nCaractere de preenchimento: ");
    scanf(" %c", &caractere2);

    printf("\n");

    while (i <= linha)
    {
        if(i == 1 || i == linha){
            desenha_retangulo(coluna, caractere);
        }
        else{
            desenha_retangulo(1, caractere);
            desenha_retangulo((coluna - 2), caractere2);
            desenha_retangulo(1, caractere);
        }
        printf("\n");
        i++;
    }



    
    return 0;
}