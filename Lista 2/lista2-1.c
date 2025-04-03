#include <stdio.h>
#include <stdlib.h>

float area_Circulo(float raio)
{
    float area;
    area = 3.1415 * raio * raio;

    return area;

}


int main()
{
    float raio;
    
    printf("Digite o valor correspondente ao raio: ");
    scanf("%f", &raio);

    printf("O valor da area: %.2fcm2", (area_Circulo(raio)));


    
    return 0;
}