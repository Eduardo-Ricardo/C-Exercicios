/*
Elabore um programa que leia uma sequência de números do teclado até que o usuário digite um número
negativo. Sobre os números lidos, apresente:
 O percentual de números pares.
 A média dos números.
 O percentual de números acima de 50.
*/
# include <stdio.h>

int main()
{ 
    float media, num_50, num_par, soma, contador;
    int num;
    soma = 0;
    contador = 0;
    while (num > 0)
    {
        printf("...");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            num_par++;
        }
        if (num > 50)
        {
            num_50++;
        }
        soma += num;
        contador++;
    }
    contador--;
    media = soma/(contador);    
    printf("\npercentual de numeros pares: %.1f", num_par/contador*100);
    printf("\npercentual de numeros acima de 50: %.1f", num_50/contador*100);
    printf("\nmedia: %.2f", media);
    return 0;
}