/* Escreva uma função que receba dois números inteiros e retorne a soma dos números existentes entre eles.*/
#include <stdio.h>

int soma(int x, int y)
{
    return x+y;
}

int main()
{
    int x, y;
    printf("digite o valor de x: ");
    scanf("%d", &x);
    printf("digite o valor de y: ");
    scanf("%d", &y);
    printf("%d", soma(x, y));
    return 0;
}