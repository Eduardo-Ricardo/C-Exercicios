// Fa�a um programa que leia um n�mero e informe se ele � divis�vel por 2 e por 3.

# include <stdio.h>
# include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    if (x % 2 == 0 && x % 3 == 0)
    {
        printf("blablabla, � divis�vel por 2 e 3");
    }
    return 0;
}