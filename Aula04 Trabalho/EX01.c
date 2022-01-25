// 1 - Escreva um programa que leia um nÃºmero real e imprima a quinta parte deste nÃºmero.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);
    printf("A quinta parte do número: %.f", numero/5);
    return 0;
}