/* Tentando descobrir se um dado era viciado, um dono de cassino o lançou 20 vezes e armazenou os resultados 
em um vetor. Dados os 20 resultados dos lançamentos, determinar o número de ocorrências de cada face.*/

# include <stdio.h>

int main()
{              
    int dado[20], testeDado[6];
    for(int c = 0; c < 6; c++)
        testeDado[c] = 0;
    printf("Vamos analizar seu dado.\n(Lembrando que esse dado em questão tem 6 lado)");
    for(int c = 0; c < 20; c++)
    {
        printf("\nQual numero caiu? ");
        scanf("%d", &dado[c]);
        for(int d = 1; d < 7; d++)
        {
            if(dado[c] == d)
            {
                testeDado[d-1]++;
                printf("%d ocorrencias de %d\n", testeDado[d-1], d);
            }
            else if(dado[c] < 1 || dado[c] > 6)
            {
                printf("Valor invalido!\nDigite um valor entre 1 e 6.");
                d = 7;
                c--;
            }
        }
    }
    for(int c = 1; c <= 6; c++)
    {
        printf("O numero de ocorrencia do numero %d foi de %d.\n", c, testeDado[c-1]);
    }
    return 0;
}
