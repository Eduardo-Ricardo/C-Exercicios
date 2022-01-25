// 4 - Escreva um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas não 
// simultaneamente pelos dois.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um numero para a verificação: ");
    scanf("%d", &numero);
    if(numero % 2 == 0 && numero % 5 == 0)
    {
        printf("O numero %d, é divisivel por 2 e 5.", numero);
    }
    else
    {
        printf("O numero %d, não é divisivel por 2 e 5.", numero);
    }
    return 0;
}
