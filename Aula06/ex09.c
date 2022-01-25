/* Escreva um programa que carregue uma matriz de 4 x 4 elementos e verifique se a matriz é triangular
superior. Uma matriz triangular superior é quadrada e possui 0 nos elementos abaixo da diagonal principal
e qualquer outro valor nos elementos da diagonal principal e acima dela. */
# include <stdio.h>

int main()
{
    int matriz[4][4], limite = 0, test1 = 0, test0 = 0;
    for (int c = 0; c < 4; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz[c][d]);
            //matriz[c][d] = c * (1 + d);       
        }
    }
    for (int c = 0; c < 4; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("|| %d ", matriz[c][d]);
        }
        printf("||\n");
    }
    for (int c = 0; c < 4; c++)
    {
        for (int d = 3; d >= limite; d--)
        {
            if(matriz[c][d] != 0)
            {
                test1++;
            }
            if( c == d)
            {
                for(int e = c + 1; e < 4; e++)
                {
                    if (matriz[e][d] == 0)
                    {
                        test0++;
                    }
                }
            }
        }
        limite++;
    }

    if (test1 == 10 && test0 == 6)
    {
        printf("e uma matriz triangular superior");
    }
    else
    {
        printf("nao e uma matriz triangular superior");
    }
    return 0;
}