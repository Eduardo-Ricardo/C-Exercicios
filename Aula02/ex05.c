// A prefeitura do Rio de Janeiro abriu uma linha de cr�dito para os funcion�rios estatut�rios. O valor
// m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fa�a um programa que permita
// entrar com o sal�rio bruto e o valor da presta��o e informar se o empr�stimo pode ou n�o ser
// concedido.

# include <stdio.h>
# include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int salario, prestacao;
    printf("Valor do sal�rio: ");
    scanf("%d", &salario);
    printf("Valor da presta��o: ");
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
