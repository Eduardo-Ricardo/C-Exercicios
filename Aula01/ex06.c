// Escreva um programa que apresente a convers�o de um valor em reais para d�lar, de acordo com a taxa de c�mbio do dia.

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main()
{
    float dola, real;
    printf("Quantos reais voce tem para ser convertido em dolares? ");
    scanf("%f", &real);
    dola = real / 5.20;
    printf("O valor de R$ %.2f, convertido para dolares dar� um total de %.2f.", real, dola);
    return 0;
}

