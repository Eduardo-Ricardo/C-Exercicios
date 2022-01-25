// Dados 2 números inteiros, escreva um programa que mostre os números do menor número até o maior
// número informado.

# include <stdio.h>

int main()
{
    int a,  b, menor, maior;
    printf("Digite o primeiro valor: ");
    scanf("%d",&a);
    printf("Digite o segundo valor: ");
    scanf("%d",&b);
    if (a > b)
    {
        maior = a;
        menor = b;
    }
    else
    {
        maior = b;
        menor = a;
    }
    while (menor <= maior)
    {
        printf("%d\n", menor);
        menor += 1;
    }
    
    return 0;
}