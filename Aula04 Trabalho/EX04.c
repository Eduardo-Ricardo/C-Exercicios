// 4 - Escreva um programa para verificar se um determinado n�mero inteiro e divis�vel por 3 ou 5, mas n�o 
// simultaneamente pelos dois.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um numero para a verifica��o: ");
    scanf("%d", &numero);
    if(numero % 2 == 0 && numero % 5 == 0)
    {
        printf("O numero %d, � divisivel por 2 e 5.", numero);
    }
    else
    {
        printf("O numero %d, n�o � divisivel por 2 e 5.", numero);
    }
    return 0;
}
