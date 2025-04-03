#include <stdio.h>
#include <stdlib.h>

float volume_Esfera(float raio)
{
    float volume;
    volume = (4 * 3.1415 * raio * raio * raio)/3;

    return volume;

}


int main()
{
    float raio;
    
    printf("Digite o valor correspondente ao raio: ");
    scanf("%f", &raio);

    printf("O valor do volume: %.2fcm3", (volume_Esfera(raio)));


    
    return 0;
}