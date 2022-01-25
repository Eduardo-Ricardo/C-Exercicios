/* Escreva um programa que armazene 10 números inteiros em vetor e, em um segundo vetor, armazene o
quadrado desses números. Por fim, apresente os valores dos dois vetores. */
int main()
{
    int num[10], num_quadradro[10], c;
    for (c = 0; c < 10; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[c]);
        num_quadradro[c] = num[c]*num[c];
    }
    for (c = 0; c < 10; c++)
    {
        printf("%d, %d\n", num[c], num_quadradro[c]);
    }
    return 0;
}