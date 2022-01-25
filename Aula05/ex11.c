/* Escreva um programa que leia 10 números inteiros e armazene-os em um vetor. Depois leia um número
e, se este número estiver no vetor, retire-o, reorganizando os elementos para ocupar o espaço dele. Ao
final, mostre os elementos do vetor resultante. */

#include <stdio.h>

int main()
{
    int num[10], c, analize;
    for (c = 0; c < 10; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[c]);
        //num[c] = c;
    }
    printf("digite um numero para ser analizado: ");
    scanf("%d", &analize);
    int espaco_vazio = 10;
    for (c = 0; c < 10; c++)
    {
        printf("\nse %d for igual a %d", analize, num[c]);
        if (analize == num[c])
        {
            printf("\nentao sera sera apagado e substituido pelo proximo");
            for (int d = c; d < espaco_vazio; d++)
            {
                num[d] = num[d + 1];
                printf("\nnum [d] = %d [%d]", num[d], d);
                if (d == espaco_vazio - 1)
                {
                    espaco_vazio--;
                    num[espaco_vazio] = NULL;
                    printf("\nnum[ultima posicao] = %d [%d]", num[espaco_vazio], espaco_vazio);
                    c--;
                }
            }   
        } 
    }
    for (c = 0; c < 10; c++)
    {
        printf("\nposicao %d do vetor = %d", c, num[c]);
    }
    return 0;
}
