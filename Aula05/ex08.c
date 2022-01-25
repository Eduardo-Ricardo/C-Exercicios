/* . Escreva um programa que armazene 10 números inteiros em 2 vetores de tamanho 5. Depois, crie um
vetor de 10 elementos que contenha nas posições pares os elementos do primeiro vetor e nas posições
ímpares os elementos do segundo vetor. */
#include <stdio.h>

int main()
{
    int c, vetor01[5], vetor02[5], vetor00[10];
    for (c = 0; c < 5; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &vetor01[c]);
    }
    for (c = 0; c < 5; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &vetor02[c]);
    }
    int d = 0;
    for (c = 0; c < 10; c++)
    {
        if (c % 2 == 0)
        {
            vetor00[c] = vetor01[d];
        }
        else
        {
            vetor00[c] = vetor02[d];
            d++;
        }
    }
    return 0;
}