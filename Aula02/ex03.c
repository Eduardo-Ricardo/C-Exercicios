// Fa�a um programa que leia um n�mero e informe se ele � ou n�o divis�vel por 5.
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
        printf("blablabla, � divis�vel por 5");
    }
    return 0;
}