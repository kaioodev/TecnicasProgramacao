#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcular_Logaritmo(double a, double b)
{

    double resultado = log2(a) / log2(b); //base 2, mas poderia ser qualquer base 

    return resultado;
    
}

int main()
{
    double base, logaritmando;

    do
    {
        printf("\n\tQuer o logaritmo de qual numero? ");
        scanf("%lf", &logaritmando); //a

    } while (logaritmando <= 0);
    

    do{
        
        printf("\tEm qual base? ");
        scanf("%lf", &base); //b

    }while(base <= 0 || base == 1);

    //whiles para cobrir as exceções! Talvez devesse ter informado o usuário.

   //printf("\n\tSua base: %.1lf\n\t%.1lf elevado a %.1lf = seu logaritmando: %.1lf\n", base, base, (calcular_Logaritmo(logaritmando, base)), logaritmando);
    printf("\n\tLog de %.1lf, na base %.1lf = %.1lf", logaritmando, base, calcular_Logaritmo(logaritmando, base));

    return 0;
}