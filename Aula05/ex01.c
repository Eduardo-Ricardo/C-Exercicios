/* Escreva um programa que armazene 10 números inteiros em um vetor e depois mostre os números
armazenados na ordem inversa em que foram digitados.*/

#include <stdio.h>

int main()
{
    int num[10], c;
    for (c = 0; c < 10; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[c]);
    }
    for (c = 9; c >= 0; c--)
    {
        printf("%d\n", num[c]);
    }
    return 0;
}