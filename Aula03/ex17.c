// Escreva um programa que receba a velocidade máxima em uma avenida e a velocidade com que um
// motorista estava dirigindo nela. Calcule a multa que o motorista vai receber, considerando que são
// pagos R$ 5,00 por cada km/h que estiver acima da velocidade permitida. Se a velocidade do motorista
// estiver dentro do limite, o programa deve informar que não há multa.

# include <stdio.h>

int main()
{
    float velocidade, velocidade_MAX;
    printf("valocidade maxima da pista: ");
    scanf("%f", &velocidade_MAX);
    printf("velocidade do veiculo: ");
    scanf("%f", &velocidade);
    if (velocidade <= velocidade_MAX)
    {
        printf("n tem multa");
    }
    else
    {
        printf("R$ %.2f", (velocidade - velocidade_MAX)*5);
    }
    
    return 0;
}