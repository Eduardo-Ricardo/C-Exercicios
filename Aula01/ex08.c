//Elabore um programa que leia o saldo de uma conta poupan�a e imprima o novo saldo, considerando um reajuste de 2%.
# include <locale.h>
# include <stdio.h>
# include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float sal;
    printf("Digite o valor atual da sua poupan�a: ");
    scanf("%f", &sal);
    printf("Aplicando um reajuste de 2%s, sera adicionado um acr�scimo de R$ %.2f,\nTotalizando R$ %.2f.", "%", sal*0.02, sal*1.02);
    return 0;
}
