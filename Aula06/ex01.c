/* Escreva um programa que carregue uma matriz de 3 x 4 elementos com números inteiros. Depois, mostre
a quantidade de elementos positivos, negativos e de zeros dessa matriz. */

# include <stdio.h>

int main()
{
    int matriz[3][4];
    int positivos = 0, negativos = 0, zeros = 0;
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz[c][d]);
            if (matriz[c][d] > 0)
            {
                positivos++;
            }
            else if (matriz[c][d] < 0)
            {
                negativos++;
            }
            else if (matriz[c][d] == 0)
            {
                zeros++;
            }
        }
    }
    printf("\nNumero positivos: %d\nNumeros negativos: %d\nzeros: %d", positivos, negativos, zeros);
    return 0;
}
