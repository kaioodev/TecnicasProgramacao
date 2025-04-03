#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primeira_Ocorrencia(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);


    for (int i = 0; i <= len1 - len2; i++) { //len 1 - len 2 = se a palavra nao couber em len1 nao faz sentido continuar procurando
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) 
                break; // Se houver diferença, sai do loop
        }

        if (j == len2) 
            return i; 
    }

    return 0;

}

int main() {
    char string1[51], string2[51];

    scanf("%50[^\n]", string1);
    getchar();
    scanf("%50[^\n]", string2);

    int resultado = primeira_Ocorrencia(string1, string2);
    printf("%d\n", resultado);

    return 0;
}
