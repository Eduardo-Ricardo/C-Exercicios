// Faça um programa que escreva todos os números pares existentes entre 1 e um número lido do teclado
// bem como a quantidade de números apresentados.

# include <stdio.h>

int main()
{
    int i, j;
    printf("fala o limite ai: ");
    scanf("%d", &j);
    for ( i = 2; i <= j; i+=2)
    {
        printf("%d\n", i);
    }
    return 0;
}