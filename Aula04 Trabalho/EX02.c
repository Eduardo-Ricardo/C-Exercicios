// 2 - Escreva um programa que leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s 
// (metros por segundo). A fórmula de conversão é M = K / 3.6, sendo K a velocidade em km/h e M a velocidade em m/s.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float velicidade_km;
    printf("Velocidade em K/m: ");
    scanf("%f", &velicidade_km);
    printf("Convertido para M/s: %.2f", velicidade_km/3.6);
    return 0;
}
