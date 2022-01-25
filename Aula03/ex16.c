// Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de
// horas trabalhadas na semana e o valor da hora. Até 40 horas trabalhadas não se acrescenta nenhum
// valor adicional. Acima de 40h e até 60h trabalhadas há um bônus de 50% para essas horas. Acima de
// 60h trabalhadas há um bônus de 100% para essas horas.
# include <stdio.h>

int main()
{
    float horas_trabalhadas, salario;
    printf("Quanta horas trabalhadas nesta semana?\n| ");
    scanf("%f", &horas_trabalhadas);
    printf("Quanto tu ganha por hr?\n| ");
    scanf("%f", &salario);
    if (horas_trabalhadas <= 40)
    {
        printf("R$ %.2f", (salario*horas_trabalhadas));
    }
    else if (horas_trabalhadas <=60)
    {
        printf("R$ %.2f", ((salario*40)+((horas_trabalhadas-40)*salario)*1.5));
    }
    else
    {
        printf("R$ %.2f", ((salario*40)+((horas_trabalhadas-40)*salario)*2));
    }

    return 0;
}