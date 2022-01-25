/* Escreva um programa que armazene 10 números inteiros em um vetor. Depois, atribua o valor 0 para
todos os elementos do vetor que possuam valores negativos. */

#include <stdio.h>

int main()
{
    int c, num[10];
    for (c = 0; c < 10; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[c]);
        if ( num[c] < 0)
            num[c] = 0;
    }   
    return 0;
}