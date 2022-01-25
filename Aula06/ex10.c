/* Escreva um programa que carregue uma matriz A de 3 x 4 elementos e crie uma matriz B transposta de A. */
# include <stdio.h>

int main()
{
    int matriz_A[3][4], matriz_B[4][3];
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz_A[c][d]);
            // matriz[c][d] = c * (1 + d);
            matriz_B[d][c] = matriz_A[c][d];
        }
    }
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("|| %d ", matriz_A[c][d]);
        }
        printf("||\n");
    }
    printf("---------------------------------------------------\n");
    for (int c = 0; c < 4; c++)
    {
        for (int d = 0; d < 3; d++)
        {
            printf("|| %d ", matriz_B[c][d]);
        }
        printf("||\n");
    }
    return 0;
}
