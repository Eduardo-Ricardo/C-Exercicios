// Utilizando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
// correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.

# include <stdio.h>

int main()
{
    int mes_num;
    printf("voce sabe o que fazer... ");
    scanf("%d", &mes_num);
    switch (mes_num)
    {
    case 1:
        printf("janeiro");
        break;
    case 2:
        printf("fevereiro");
        break;
    case 3:
        printf("marco");
        break;
    case 4:
        printf("abril");
        break;
    case 5:
        printf("maio");
        break;
    case 6:
        printf("junho");
        break;
    case 7:
        printf("julho");
        break;
    case 8:
        printf("agosto");
        break;
    case 9:
        printf("setembro");
        break;
    case 10:
        printf("outubro");
        break;
    case 11:
        printf("novembro");
        break;
    case 12:
        printf("dezembro");
        break;
      
    default:
        break;
        printf("Adivinha de novo... ");
    }
    return 0;
}