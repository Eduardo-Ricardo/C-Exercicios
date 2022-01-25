// Faça um programa que leia o valor de um produto, o percentual do desconto desejado e imprima o valor do desconto
//  e o novo valor do produto.

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float produto, porcentagem, desconto;
    
    printf("Qual o valor do produto que você quer aplicar o desconto? ");
    scanf("%f", &produto);
    
    printf("E de quanto sera o desconto? ");
    scanf("%f", &porcentagem);
    desconto = produto * (porcentagem/100);

    printf("O desconto sera de R$ %.2f, e o preço final do produto sera de R$ %.2f.", desconto, produto - desconto);
    return 0;
}
