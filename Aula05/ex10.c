/*  Escreva um programa que armazene 10 números inteiros em um vetor. Em seguida, troque o 1° elemento
com o último, o 2° elemento com o penúltimo, e assim por diante. Mostre na tela o vetor modificado. */
int main()
{
    int x[10], y[10], c;
    for (c = 0; c < 10; c++)
    {
        printf("digite um numero: ");
        scanf("%d", &x[c]);
        y [c] = x [c];
    }
    int d = 9;
    for (c = 0; c < 10; c++)
    {
        x [c]= y [d];
        d--;
        printf("%d\n", x[c]);
    }
    return 0;
}