#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificador_Palindromo(char *p)
{
    int i = 0, tamanho;

    tamanho = strlen(p) - 1; 

    while(tamanho >= i)
    {
        if(p[i] != p[tamanho]) 
            return 0;
        
        tamanho--;
        i++;

    }

        return 1;

}

int main()
{
    char palavra[50];
    
    printf("Digite um texto: ");
    scanf("%49[^\n]", palavra);  //problema: %s nao lê os espaços!

    //soluçao: https://wiki.portugal-a-programar.pt/dev_geral/c/scanfparastrings/

    if(verificador_Palindromo(palavra))
        printf("Eh palindromo\n");
    else   
        printf("Nao eh palindromo\n");


    return 0;
}