// Fa�a um programa que calcule a quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel 
// que faz 12km por litro e considerando que s�o fornecidos o tempo e a velocidade m�dia da viagem.
# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float tempo, velocidade_media, distancia_km, litros_gastos;
    
    printf("Ol�, irei calcular quantos litros voce gastou na sua viagem!\nPor favor me diga quantas horas durou a a viagem: ");
    scanf("%f", &tempo);
    
    printf("E qual foi a velocidade m�dia? ");
    scanf("%f", &velocidade_media);
    
    distancia_km = tempo * velocidade_media;
    litros_gastos = distancia_km / 12;

    printf("Sua viagem teve uma distancia de aproximadamente %.0f Km's e um gasto de %.1f litros!", distancia_km, litros_gastos);

    return 0;
}
