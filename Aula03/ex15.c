// Faça um programa que mostre ao usuário um menu com 4 opções de operações matemática básica
// (adição, subtração, multiplicação e divisão). O usuário escolhe uma das opções e o seu programa então
// pede dois números, realiza a operação e mostra o resultado. Utilize o switch para este problema.

# include <stdio.h>

int main()
{
    int a, b, operador;
    printf("primeiro valor: ");
    scanf("%d", &a);
    printf("1. Adicao\n2. subtrcao\n3. multiplicacao\n4. divisao\nSua escolha: ");
    scanf("%d", &operador);
    printf("secundo valor: ");
    scanf("%d", &b);
    switch (operador)
    {
    case 1:
        printf("%d", (a + b));
        break;
    
    case 2:
        printf("%d", (a - b));
        break;

    case 3:
        printf("%d", (a * b));
        break;

    case 4:
        printf("%d", (a / b));
        break;

    default:
        break;
        printf("n vou nem me dar ao trabalho de te explicar o q deu errado");
    }    
        return 0;
}