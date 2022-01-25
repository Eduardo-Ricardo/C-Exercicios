/*Escreva um programa que armazene 10 números inteiros em um vetor. Depois, leia um número inteiro e
informe quantas vezes ele aparece no vetor*/
#include <stdio.h>

int main()
{
    int c, num[10], test, repet;
    repet = 0;
    for (c = 0; c < 10; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[c]);
    }
    printf("Digite um numero para analise: ");
    scanf("%d", &test);
    for (c = 0; c < 10; c++)
    {
        if (test == num[c])
        {
            repet++;
        }
    }
    printf("o numero digitado foi repetido %d vezes.", repet);
    return 0;
}