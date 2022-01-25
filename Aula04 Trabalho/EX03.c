// 3 - Uma empresa contrata um encanador a R$ 110,00 por dia. Faça um programa que solicite o número de dias 
// trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 
// 8% para imposto de renda.

#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float dias;
    printf("Por quantos dias o encanador sera contratado? ");
    scanf("%f", &dias);
    printf("Total a ser pago com descontos aplicados: R$ %.2f", 110*dias*0.92);
    return 0;
}
