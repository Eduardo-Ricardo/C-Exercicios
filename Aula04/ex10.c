// Construa um programa em que leia vários números e informe quantos números entre 10 e 20 foram
// digitados. Quando o valor 0 (zero) for lido, o programa deve ser encerrado.

# include <stdio.h>

int main()
{
    int count, test;
    count = 0;
    while (test != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &test);
        if (test >= 10 && test <= 20)
        {
            count++;
        }
        
    }
    printf("Total de numeros entre 10 e 20 digitados: %d", count);
       
    return 0;
}