// 3 - Uma empresa contrata um encanador a R$ 110,00 por dia. Fa�a um programa que solicite o n�mero de dias 
// trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga, sabendo-se que s�o descontados 
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
