// Faça um programa que some os números fornecidos pelo usuário até que o número lido seja igual a zero.
// Ao final, mostre a soma.
# include <stdio.h>

int main()
{
    int test, num;
    num = 0;
    while (test != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &test);
        num += test; 
        printf("%d\n", num);
    }
       
    return 0;
}