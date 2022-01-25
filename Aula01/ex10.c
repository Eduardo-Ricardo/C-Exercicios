// Escreva um programa que leia dois números inteiros e faça a troca de valores entre eles. Apresente na tela 
// as variáveis com seus valores trocados.

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main()
{
 
    setlocale(LC_ALL, "Portuguese");
    int var00, var01, aux;
    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &var00);
    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &var01);
    aux = var00;
    var00 = var01;
    var01 = aux;

    printf("Aqui estão as variaveis com os valores trocados\nvar00 = %d\nvar01 = %d", var00, var01);
    
    return 0;
}
