/*Escreva um programa que leia dois vetores de 5 posições e faça a soma dos elementos de mesmo índice, 
colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/

#include <stdio.h>

int main()
{
    int x[5], y[5], z[5];
    printf("Preenchendo o primerio Vetor\n");
    for (int c = 0; c < 5; c++)
    {
        printf("Digite o valor do indice de posicao %d: ", (c+1));
        scanf("%d", &x[c]);
    }
    printf("Preenchendo o segundo Vetor\n");
    for (int c = 0; c < 5; c++)
    {
        printf("Digite o valor do indice de posicao %d: ", (c+1));
        scanf("%d", &y[c]);
 
    }
    printf("A soma dos vetores X e Y da Z\n");
    for (int c = 0; c < 5; c++)
    {
        z[c]= x[c] + y[c];
        printf("z com indice de %d: %d\n", c+1, z[c]);
    }
    return 0;
}