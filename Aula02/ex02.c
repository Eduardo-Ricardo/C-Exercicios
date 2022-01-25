// Escreva um programa que leia dois valores inteiros e efetue a adição. 
// Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, 
// caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
# include <stdio.h>
# include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    printf("Digite o 1° valor: ");
    scanf("%d", &x);
    printf("Digite o 2° valor: ");
    scanf("%d", &y);
    if (x + y > 20)
    {
        printf("%d", x + y + 8);
    }
    else
    {
        printf("%d", x + y - 5);
    }
    return 0;
}