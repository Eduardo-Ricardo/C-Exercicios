// Faça um programa que apresenta na tela a soma obtida dos 100 primeiros números inteiros. Ex.: 1 + 2
// + 3 + 4 + 5 + ... + 97 + 98 + 99 + 100.
# include <stdio.h>

int main()
{
    int i, j, k;
    printf("fala o limite ai: ");
    scanf("%d", &j);
    k = 0;
    for ( i = 1; i <= j; i++)
    {
        k += i;
        printf("%d\n", k);
    }
    return 0;
}