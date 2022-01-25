/* Escreva um programa que carregue uma matriz de 5 x 4 elementos com números inteiros e apresente
uma determinada linha da matriz, solicitada pelo usuário. */
# include <stdio.h>

int main()
{
    int matriz[5][4], escolha;
    for (int c = 0; c < 5; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz[c][d]);
        }
    }
    printf("Mostrar linha: ");
    scanf("%d", &escolha);
    for (int d = 0; d < 4; d++)
        {
            printf("| %d |", matriz[escolha][d]);
        }
    return 0;
}