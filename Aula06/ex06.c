/* Escreva um programa que carregue uma matriz de 3 x 3 elementos com números inteiros e calcule a
diferença da soma dos elementos da diagonal principal com a soma dos elementos da diagonal secundária. */
# include <stdio.h>

int main()
{
    int matriz[3][3], soma_P = 0, soma_S = 0;
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 3; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz[c][d]);
            if (c == d)
            {
                soma_P += matriz[c][d];
            }
            if (c + d == 2)
            {
                soma_S += matriz[c][d];
            }
        }
    }
        printf("A diferenca da soma entra a diagonal principal %d e a diagonal secundaria %d e de: %d", soma_P, soma_S, (soma_P - soma_S));
    return 0;
}