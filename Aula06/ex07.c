/* Escreva um programa que carregue uma matriz de 3 x 3 elementos com números inteiros e calcule: a
soma dos elementos que estão acima da diagonal principal, a soma dos elementos que estão abaixo da
diagonal principal e a soma dos elementos da diagonal principal. */

# include <stdio.h>

int main()
{
    int matriz[3][3], soma_triangulo_superior = 0;
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 3; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz[c][d]);
            //matriz[c][d] = c * (1 + d);
            if (c == d)
            {
                for(int e = c; e >= 0; e--)
                {
                    soma_triangulo_superior += matriz[e][d];
                }
            }
        }
    }
    printf("Soma: %d", soma_triangulo_superior);
    return 0;
}