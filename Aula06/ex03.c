/* Escreva um programa que carregue uma matriz de 5 x 4 elementos com números inteiros e mostre na
tela somente os elementos cujos índices (tanto linha quanto coluna) são pares. */

int main()
{
    int matriz[5][4];
    for (int c = 0; c < 5; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz[c][d]);
            //matriz[c][d] = (c + 1) * (d + 1);
        }
    }
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            if (c % 2 == 0 && d % 2 == 0)
            {
                printf("|| %d ", matriz[c][d]);
            }
            else
            {
                printf("|| X ");
            }
        }
        printf("||\n");
    }
    return 0;
}