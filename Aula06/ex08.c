/* Escreva um programa que carregue uma matriz de 3 x 3 elementos e verifique se ela é uma matriz
identidade. Uma matriz quadrada possui o mesmo número de linhas e colunas. Uma matriz identidade é
quadrada e possui 1 nos elementos da diagonal principal e 0 nos demais. */
# include <stdio.h>

int main()
{
    int matriz[3][3], test1 = 0, test0 = 0;
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 3; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz[c][d]);
            // matriz[c][d] = c * (1 + d);
            if (c == d && matriz[c][d] == 1)
            {
                test1++;
            }
            if (c != d && matriz[c][d] == 0)
            {
                test0++;
            }
            
        }
    }
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 3; d++)
        {
            printf("|| %d ", matriz[c][d]);
        }
        printf("||\n");
    }
    if (test1 == 3 && test0 == 6)
    {
        printf("e uma matriz identidade");
    }
    else
    {
        printf("nao e uma matriz identidade");
    }

    return 0;
}