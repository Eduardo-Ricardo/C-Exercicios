// Elabore um programa que apresente na tela a tabuada de um número lido do teclado.
# include <stdio.h>

int main()
{
    int i, j;
    printf("digite um numero");
    scanf("%d", &j);
    for (i = 0; i < 11; i++)
    {
        printf("%d x %d = %d\n", j, i, j*i);
    }
    
    return 0;
}
