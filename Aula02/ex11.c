//  Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço 
// novo, e escreva uma mensagem com o novo preço de acordo com os seguintes critérios:
// * Até 50,00: 5% de aumento;
// * Entre 50,01 e 100,00: 10% de aumento;
// * Acima de 100,00: 15% de aumento.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float preco;
    printf("Valor do produto: ");
    scanf("%f", &preco);
    if (preco < 50)
    {
        printf("O produto sera vendido por: R$ %.2f", preco*1.05);
    }
    else if (preco > 50 && preco <= 100)
    {
        printf("O produto sera vendido por: R$ %.2f", preco*1.1);
    }
    
    else
    {
        printf("O produto sera vendido por: R$ %.2f", preco*1.15);
    }
    return 0;
}