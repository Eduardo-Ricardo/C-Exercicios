// Faça um programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque
// e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5,
// 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se
// preocupar com a quantidade de notas existentes na máquina. Exemplos:
// * Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma
// nota de 5 e uma nota de 1.
// * Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro
// notas de 10, uma nota de 5 e quatro notas de 1.

# include <stdio.h>

int main()
{
    int saque, notas100, notas50, notas10, notas5, notas1;
    printf("Valor do saque: ");
    scanf("%d", &saque);
    if (saque >= 100)
    {
        notas100 = saque/100;
        printf("%d notas de 100\n", notas100);
        saque -= notas100*100;
    }
    if (saque >= 50)
    {
        notas50 = saque/50;
        printf("%d notas de 50\n", notas50);
        saque -= notas50*50;
    }
    if (saque >= 10)
    {
        notas10 = saque/10;
        printf("%d notas de 10\n", notas100);
        saque -= notas10*10;
    }
    if (saque >= 5)
    {
        notas5 = saque/5;
        printf("%d notas de 5\n", notas5);
        saque -= notas5*5;
    }
    if (saque >= 1)
    {
        notas1 = saque/1;
        printf("%d notas de 1\n", notas1);
        saque -= notas1*1;
    }
    return 0;
}