//Escreva um programa que calcule e apresente na tela o resultado de C = (A + B) x B. Considere que A e B são números inteiros.
# include <stdio.h>
# include <locale.h>
 

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Considerando a equacão C = (A + B) * B\no valor de 'C' = %d", ((a + b)* b));

    return 0;
}
