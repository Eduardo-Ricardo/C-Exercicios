# include <stdio.h>

int main()
{
    int matriz[3][4];
    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            printf("Bora preencher essa matriz ai?\nAtualmente na Linha %d/Coluna %d: ", c, d);
            scanf("%d", &matriz[c][d]);
            // matriz[c][d] = c * (1 + d);
        }
    }
    return 0;
}
