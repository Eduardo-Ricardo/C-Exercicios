/* Escreva um programa que armazene 10 números inteiros em 2 vetores de tamanho 5. Ao final, o programa
deve mostrar os números comuns aos dois vetores. */
#include <stdio.h>

int main()
{
    int vetor_A[5], vetor_B[5], vetor_AB[5], c;
    for (c = 0; c < 5; c++)
    {
        printf("digite um numero para o vetor A: ");
        scanf("%d", &vetor_A[c]);
    }
    for (c = 0; c < 5; c++)
    {
        printf("digite um numero para o vetor B: ");
        scanf("%d", &vetor_B[c]);
    }
    int limite = 5;
    for (c = 0; c < 5; c++)
    {
        for (int d = 0; d < limite; d++)
        {
            printf("se o Vetor_A[%d] = Vetor_B[%d] / %d = %d\n", c, d, vetor_A[c], vetor_B[d]);
            if (vetor_A[c] == vetor_B[d])
            { 
                for (int e = d; e < limite; e++)
                {
                    vetor_B[e] = vetor_B[e + 1];
                    if (e == limite - 1)
                    {
                        limite--;
                        vetor_AB[limite] = NULL;
                        d--;
                    }
                    vetor_AB[c] = vetor_A[c];
                }
            }
        }
        printf("\n");
    }
     for (c = 0; c < 5 - limite; c++)
    {
        printf("\n%d", vetor_AB[c]);
    }
    return 0;
}