// Faça um programa que leia um número e imprima uma das mensagens: "Maior que 20", "Igual a 20" ou
// "Menor que 20".
# include <stdio.h>
# include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    if (x < 20)
    {
        printf("Menor que 20");
    }
    else if (x == 20)
    {
        printf("Igual a 20");
    }
    else
    {
        printf("Maior que 20");
    }
    return 0;
}