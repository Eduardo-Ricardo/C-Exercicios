// Elabore um programa que receba um número inteiro positivo e escreva a sequência de números de
// Fibonacci. Por exemplo, se o número for 10, escreva 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.
# include <stdio.h>

int main()
{
    int x, y, z, count;
    printf("numero de repeticoes: ");
    scanf("%d", &count);
    y = 0;
    x = 1;
    printf("1\n");
    while(count > 1)
    {
        z = x + y;
        y = x;
        x = z;
        printf("%d\n", x);
        count--;
    }
    return 0;
}
