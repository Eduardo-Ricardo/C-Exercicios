/* Escreva um programa que armazene 10 notas em um vetor e depois calcule a média delas. Mostre quantas
notas estão abaixo da média e quantas notas estão acima da média. */

#include <stdio.h>

int main()
{
    int soma, c, abaixo_media, acima_media;
    float media, nota[10];
    soma = 0;
    abaixo_media = 0;
    acima_media = 0;
    for (c = 0; c < 10; c++)
    {
        printf("digite a nota %d: ", c+1);
        scanf("%d", &nota[c]);
        if (nota[c] > 10 || nota[c] < 0)
        {
            printf("nota invalida");
            c--;
            nota[c] = 0;
        }
        soma += nota[c];
    }
    media = soma / 10;
    for (c = 0; c < 10; c++)
    {
        if (nota[c] >= media)
        {
            acima_media++;
        }
        else
        {
            abaixo_media++;
        }
    }
    printf("A media das notas: %f", media);
    printf("Total de notas a acima da média: %d", acima_media);
    printf("Total de notas a abaixo da média: %d", abaixo_media);
    return 0;
}