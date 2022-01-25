/* Escreva um programa que armazene 10 números inteiros em um vetor. Depois, apresente o maior valor
armazenado no vetor. */
#include <stdio.h>

int main()
{
    int c, maior, num[10];
    for (c = 0; c < 9; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[c]);
    }
    for (c = 0; c < 9; c++)
    {
        if (c == 0)
        {
            maior = num[c];
        }
        else if (maior < num[c])
        {
            maior = num[c];
        }
    }
    printf("%d", maior);
    return 0;
}