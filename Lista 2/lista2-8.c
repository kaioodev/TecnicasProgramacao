#include <stdio.h>
#include <stdlib.h>

int calcular_Fibonacci(int limite)
{

    int i, sucessor = 1, soma = 0, antecessor = 0;

    for(i = 0; i < limite; i++)
    {
        printf("%d ", soma); //nao precisaria do printf, mas é legal
        soma = sucessor + antecessor; 
        sucessor = antecessor; 
        antecessor = soma; 
    }

    return sucessor;

}

int main()
{
    int limite;

    printf("Digite o iesimo termo que deseja: ");
    scanf("%d", &limite);

    printf("\nO %d termo da sequencia de fibonacci: %d", limite, calcular_Fibonacci(limite));
    
    return 0;
}