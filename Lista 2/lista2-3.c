#include <stdio.h> //função que calcula a média(nesse caso de 3 notas)
//passar vetor como parametro so com ponteiro(*);

float media_3notas(float *V)
{
    float S = 0;
    for(int i = 0; i < 3; i++)
    {
        S +=  V[i];
    }

    float ME = S/3.00;

    return ME;
}

int main()
{
    
    float V[3];
  
    printf("Digite tres notas: ");
   

    for(int i = 0; i < 3; i++)
    {
        scanf("%f", &V[i]);
    }

    float me = media_3notas(V);
    printf("Media: %.2f", me);
    
    return 0;
}