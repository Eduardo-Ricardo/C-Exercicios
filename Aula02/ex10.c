// Faça um programa que leia três números inteiros distintos e os imprima em ordem crescente.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);
    printf("Valor de c: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("| %d | %d | %d |", a, b, c);
        }
        else
        {
            printf("| %d | %d | %d |", a, c, b);
        }
        
    }
    else if (b > c && b > a)
    {
        if (a > c)
        {
            printf("| %d | %d | %d |", b, a, c);
        }
        else
        {
            printf("| %d | %d | %d |", b, c, a);
        }
    }
    else
    {
        if (a > b)
        {
            printf("| %d | %d | %d |", c, a, b);
        }
        else
        {
            printf("| %d | %d | %d |", c, b, a);
        }
    }
    
    
    return 0;
}
