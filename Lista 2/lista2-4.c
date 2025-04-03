#include <stdio.h>
#include <stdlib.h>
//tentei adicionar a função setlocale, mas não deu certo de maneira nenhuma professor...
//vai sem acentuação mesmo

void qual_Mes(int n)
{
    
    switch(n)
    {
        case (1):
            printf("Mes correspondente: Janeiro");
        break;

        case (2):
            printf("Mes correspondente: Fevereiro");
        break;

        case (3):
            printf("Mes correspondente: Marco");
        break;

        case (4):
            printf("Mes correspondente: Abril");
        break;

        case (5):
            printf("Mes correspondente: Maio");
        break;

        case (6):
            printf("Mes correspondente: Junho");
        break;

        case (7):
            printf("Mes correspondente: Julho");
        break;

        case (8):
            printf("Mes correspondente: Agosto");
        break;

        case (9):
            printf("Mes correspondente: Setembro");
        break;

        case (10):
            printf("Mes correspondente: Outubro");
        break;

        case (11):
            printf("Mes correspondente: Novembro");
        break;

        case (12):
            printf("Mes correspondente: Dezembro");
        break;

        default:
            printf("Mês inexistente.");
    }


}

int main()
{

    int mes;
    printf("Digite o numero do mes: ");
    scanf("%d", &mes);

    qual_Mes(mes);
    


    
    return 0;
}