// Faça um programa que leia um número e informe se ele é ou não divisível por 5.
# include <stdio.h>
# include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    if (x % 5 == 0)
    {
        printf("blablabla, é divisível por 5");
    }
    return 0;
}