// Escreva um programa que leia um n�mero e indique se o n�mero est� compreendido entre 20 e 50 ou n�o.
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