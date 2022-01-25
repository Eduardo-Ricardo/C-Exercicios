/* Faça um programa que escreva a soma dos elementos de uma matriz 4x4. */
# include <stdio.h>

int main()
{
    int matriz[4][4], soma = 0;
    for(int c = 0; c < 4; c++)
    {
        for(int d = 0; d < 4; d++)
        {
            printf("Digite o valor para o indice [%d, %d]: ", c, d);
            scanf("%d", &matriz[c][d]);
            soma += matriz[c][d];
        }
    }
    printf("A matriz digitada foi");
    for(int c = 0; c < 4; c++)
    {
        printf("\n");
        for(int d = 0; d < 4; d++)
        {
            printf("%d ", matriz[c][d]);
        }
    }
    printf("\nA soma de todos os valores digitados: %d", soma);
    return 0;
}
