#include <stdio.h>

#include <stdlib.h>
/*int calcular_Combinacao(int n, int p)
{

    int fatorial1, fatorial2, fatorial3;
    fatorial1  = n;

    for(int i = 1; i < n; i++)
    {
        fatorial1 *= (n - i);
    }

    fatorial2 = p;

    for(int i = 1; i < p; i++)
    {
        fatorial2 *= (p - i);
    }

    fatorial3 = n - p;

    for(int i = 1; i < (n-p); i++)
    {
        fatorial3 *= ((n - p) - i);
    }

    return fatorial1 / (fatorial2 * fatorial3);

}

int main()
{
    int n, p;

    scanf("%d %d", &n, &p);

    printf("Combinacoes: %d", calcular_Combinacao(n, p));


    
    return 0;
}*/

long long int calcular_Combinacao(int n, int p)
{

    long long int fatorial1 = 1, fatorial2 = 1;
    int i;

    for(i = 2; i <= p; i++)
        fatorial2 *= i;

    for(i = n - p + 1; i <= n; i++)
        fatorial1 *= i;
    

    return fatorial1 / fatorial2;

}

int main()
{
    int n, p;

    scanf("%d %d", &n, &p);
    
    printf("Combinacoes: %lld", calcular_Combinacao(n, p));


    
    return 0;
}