/*Escreva um programa que leia 10 números inteiros e armazene-os em um vetor chamado numeros.
Depois, percorra o vetor numeros procurando por números pares. Os números pares encontrados deverão
ser armazenados em um vetor chamado pares.*/
int main()
{
    int c, pares[10], num[10];
    for (c = 0; c < 9; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[c]);
    }
    for (c = 0; c < 9; c++)
    {
        if (num[c] % 2 == 0)
        {
            pares[c] = num[c];
            printf("%d\n", pares[c]);
        }
        
    }
    
    return 0;
}