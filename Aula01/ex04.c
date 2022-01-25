// Crie um programa que leia uma temperatura em graus Celsius e apresente-a convertida em graus
// Fahrenheit, cuja fórmula é F = Celsius * 9 / 5 + 32.

# include <stdlib.h>

int main()
{
    int celcius;
    printf("Qual a temperatura em grasu celsius? ");
    scanf("%d", &celcius);
    printf("Convertendo %d graus celcius sera equeivalente a %d graus fahrenheit.", celcius, (celcius * 9 / 5 + 32));
    return 0;
}
