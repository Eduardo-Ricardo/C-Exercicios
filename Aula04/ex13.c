// Faça um programa que calcule o fatorial de um número positivo qualquer.
# include <stdio.h>

int main()
{
    int num, i, zero;
    zero = 0;
    printf("ja sabe o que fazer: ");
    scanf("%d", &num);
    if(num == 0)
    {
        printf("%d! ", num);
        zero = 1;
    }
    else
    {
        printf("%d! = %d ", num, num);
    }
    for (i = (num - 1); i > 0 ; i--)
    {
        printf("* %d ", i);
        num = num * i;
    }
    printf("= %d", num + zero);
    return 0;
}
