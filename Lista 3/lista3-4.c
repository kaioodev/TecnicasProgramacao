#include <stdio.h>

void verifica_Perfeito(int num) {
    int i, soma = 0, fatores[100], contador = 0; 

 
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            fatores[contador++] = i; 
            soma += i;
        }
    }

    
    if (soma == num) {
        printf("%d = ", num);
        
        
        for (i = 0; i < contador; i++) {
            printf("%d", fatores[i]);

            if (i < contador - 1) 
                printf(" + ");
        }

        printf("\n");
    }
}

int main() {
    printf("Numeros perfeitos entre 1 e 10000:\n");

    for (int num = 2; num <= 10000; num++) {
        verifica_Perfeito(num);
    }

    return 0;
}
