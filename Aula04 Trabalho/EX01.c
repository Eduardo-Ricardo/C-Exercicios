// 1 - Escreva um programa que leia um número real e imprima a quinta parte deste número.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    printf("Digite um n�mero: ");
    scanf("%f", &numero);
    printf("A quinta parte do n�mero: %.f", numero/5);
    return 0;
}