// Construa um programa que leia 10 números do teclado e apresente na tela o maior e o menor valor lido. 
# include <stdio.h>

int main()
{
    int count, test, num;
    for (count = 0; count < 10; count++)
    {
        printf("digite um numero: ");
        scanf("%d", &test);
        if (count == 0 || num > test)
        num = test;
    }
    printf("Menor numero digitado: %d", num);
    return 0;
}