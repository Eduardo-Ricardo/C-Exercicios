// Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for menor 
// que R$20,00, caso contrário, o lucro será de 30%. Escreva um programa que leia o valor do produto e 
// imprima o valor da venda.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float preco;
    printf("Valor do produto: ");
    scanf("%f", &preco);
    if (preco > 20)
    {
        printf("O produto sera vendido por: R$ %.2f", preco*1.45);
    }
    else
    {
        printf("O produto sera vendido por: R$ %.2f", preco*1.30);
    }
    return 0;
}