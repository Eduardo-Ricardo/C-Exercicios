/* Escreva um programa que armazene 10 números inteiros em um vetor. Depois alimente dois vetores: um
contendo os números positivos e outro contendo os números negativos do vetor inicial. */
#include <stdio.h>

int main()
{
    int num[10], vetor_positivo[10], vetor_negativo[10], c;
    for (c = 0; c < 10; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[c]);
    }
    for (c = 0; c > 10; c++)
    {
        int d = 0;
        if (num[c] > 0)
            vetor_positivo[d] = num [c];
        else if (num[c] < 0)
            vetor_negativo[d] = num [c];
        d++;
    }
    return 0;
}