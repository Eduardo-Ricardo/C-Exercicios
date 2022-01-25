// Faça um programa que calcule e apresente a média aritmética de diversos números lidos do teclado.
//Serão digitados valores até que o usuário digite 0.
# include <stdio.h>

int main()
{
    int num, soma, count;
    soma = 0;
   for (count = 1; num != 0; count++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num; 
        printf("soma : %d\n", soma);
        num == 0 ? printf("media : %d\n", soma/(count-1)) : printf("media : %d\n", soma/count);
    } 
     
    return 0;
}