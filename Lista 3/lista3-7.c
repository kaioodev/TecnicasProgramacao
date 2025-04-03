#include <stdio.h>
#include <string.h>

void caixa_com_texto_centralizado(int n, char *string, char caracter) {
    int tam = strlen(string);
    int largura_util = n - 2;
  
    if (tam > largura_util) {
        tam = largura_util;
    }

    
    int inicioString = (largura_util - tam) / 2;

  
    for (int i = 0; i < n; i++) {
        printf("%c", caracter);
    }
    printf("\n");

 
    printf("%c", caracter); 
    for (int j = 0; j < largura_util; j++) {
        if (j >= inicioString && j < inicioString + tam) {
            printf("%c", string[j - inicioString]);
        } else {
            printf(" ");
        }
    }
    printf("%c\n", caracter);

   
    for (int i = 0; i < n; i++) {
        printf("%c", caracter);
    }
    printf("\n");
}

int main() {
    int number;
    char caracter, string[50];

    printf("Digite a string: ");
    scanf(" %49[^\n]", string); 
    printf("Digite o caractere: ");
    scanf(" %c", &caracter); 
    printf("Digite um n�mero: ");
    scanf("%d", &number);

    caixa_com_texto_centralizado(number, string, caracter);

    return 0;
}
