/*
Construa um programa que leia uma sequência de números do teclado até que o usuário digite 0. Sobre
os números lidos, apresente na tela:
a) O menor valor.
b) O maior valor.
c) A soma de todos os valores.
d) A média dos valores.
e) A quantidade de números ímpares.
f) A quantidade de números negativos.
*/
# include <stdio.h>

int main()
{
    int menor_valor, maior_valor, impares, negativos, num;
    float media, soma, count;
    soma = 0;
    count = 0;
    negativos = 0;
    impares = 0;
    while (num != 0)
    {
        printf("Digita um numero ai e seja feliz: ");
        scanf("%d", &num);
        if (count == 0)
        {
            menor_valor = num;
            maior_valor = num;
        }
        // Validação do menor e maior valor.
        if(menor_valor > num && num != 0)
        {
            menor_valor = num;
        }
        else if (maior_valor < num && num != 0)
        {
            maior_valor = num;
        }
        // Somatório dos valores.
        soma += num;
        // Contador de impares.
        if (num % 2 == 1 || num % 2 == -1)
        {
            impares++;
        }
        if(num < 0)
        {
            negativos++;
        }
        count++;
    }
    media = soma/(count-1);
    printf("\nQuantidade de numeros de impares: %d", impares);
    printf("\nQuantidade de numeros negativos: %d", negativos);
    printf("\nMaior valor: %d", maior_valor);
    printf("\nMenor valor: %d", menor_valor);
    printf("\nMedia: %.2f", media);
    printf("\nSoma: %.0f", soma);


    return 0;
}
