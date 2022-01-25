/* Escreva um programa que carregue uma matriz de 3 x 4 elementos com números inteiros. Depois,
encontre o maior elemento da matriz e mostre uma matriz resultante que será a matriz carregada
multiplicada pelo maior elemento da matriz. */

# include <stdio.h>

int main()
{
    int matriz_I[3][4], matriz_F[3][4];
    int maior;
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz_I[c][d]);
            //matriz_I[c][d] = (c + 1) * (d + 1);

            if (c == 0 && d == 0)
            {
                maior = matriz_I[c][d];
            }
            else if (matriz_I[c][d] > maior)
            {
                maior = matriz_I[c][d];
            }
 
        }
        printf("\n");
    } 
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            matriz_F[c][d] = matriz_I[c][d] * maior; 
            printf("|| %d ", matriz_F[c][d]);
        }
        printf("||\n");
    }  
    return 0;
}
