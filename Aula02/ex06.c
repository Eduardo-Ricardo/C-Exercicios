// Escreva um programa que leia um número e indique se o número está compreendido entre 20 e 50 ou não.
# include <stdio.h>
# include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    if (x > 20 && x < 50)
    {
        printf("blablabla, esta entre 20 e 30");
    }
    return 0;
}