// A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários. O valor
// máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa que permita
// entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser
// concedido.

# include <stdio.h>
# include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int salario, prestacao;
    printf("Valor do salário: ");
    scanf("%d", &salario);
    printf("Valor da prestação: ");
    scanf("%d", &prestacao);

    if (prestacao < salario/3)
    {
        printf("O emprestimo foi aprovado!");
    }
    else
    {
        printf("O emprestico foi negado!");
    }
    
    return 0;
}
