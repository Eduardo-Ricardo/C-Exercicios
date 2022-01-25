/* Escreva um programa que carregue uma matriz A de 5 x 2 elementos com números inteiros e, em um
matriz B do mesmo tamanho, armazene a soma dos elementos de A na primeira coluna e a multiplicação
dos elementos de A na segunda coluna. */

# include <stdio.h>

int main()
{
    int matriz_A[5][2], matriz_B[5][2];
    for (int c = 0; c < 5; c++)
    {
        for (int d = 0; d < 2; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz_A[c][d]);
            if (d == 1)
            {
                matriz_B[c][0] = matriz_A[c][0] + matriz_A[c][1];
                matriz_B[c][1] = matriz_A[c][0] * matriz_A[c][1];
            }
        }
    }
    for (int c = 0; c < 5; c++)
    {
        for (int d = 0; d < 2; d++)
        {
            printf("|| %d ", matriz_B[c][d]);
        }
        printf("||\n");
    }
    return 0;
}