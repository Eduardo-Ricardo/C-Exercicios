// Faça um programa que escreva os números múltiplos de 5, no intervalo de 1 até 50.
# include <stdio.h>

int main()
{
    int i;
    for ( i = 5; i <= 50; i+=5)
    {
        printf("%d\n", i);
    }
    return 0;
}