#include <stdio.h>
#include <string.h>

char* to_upper_case(char *string, int tam){

    char *novaString = malloc(sizeof(char) * tam);

    for(int i = 0; i < tam; i++){
        if(string[i] >= 97 && string[i] <= 122)
            novaString[i] = string[i] - 32;
        else
            novaString[i] = string[i];
    }

    return novaString;
}

int main (){

    char string[50];

    printf("Digite a palavra:\n>> ");
    scanf("%49[^\n]", string);

    int tam = strlen(string);
    char *novaString = to_loew_case(string, tam);

    printf("String original: %s\n", string);
    printf("Nova String: %s\n", novaString);

    return 0;
}
