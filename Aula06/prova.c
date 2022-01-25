/* Logonacci foi um primo distante do famoso matemático italiano Leonardo Fibonacci. Assim como seu primo, ele também apresentou uma famosa sequência de números. Dado um inteiro positivo N, a N-sequência de Logonacci é tal que:

O 1º  número é N;
Se um número na sequência é par, seu sucessor é sua metade;
Se um número na sequência é ímpar, seu sucessor é tal número decrementado em uma unidade;
O último número na sequência é 1 (o número 1 sempre pertence à sequência, para qualquer valor de N).
Escreva um programa em C++ que leia do usuário um valor inteiro positivo N e imprima todos os números da N-sequência de Logonacci e a quantidade de números gerados em tal sequência. Caso seja fornacido um valor negativo ou nula para N, o programa deve exibir a mensagem Valor invalido e terminar.

 
OBS.: Nos exemplos, o texto em negrito/vermelho representa a entrada do usuário e o texto em itálico representa a saída do programa. O programa deve se comportar como indicado nos exemplos abaixo, obtendo as entradas e mostrando as mensagens e resultados NA MESMA SEQUÊNCIA E FORMATO (incluindo os textos das mensagens).

Exemplo 1
Digite valor de N: 99
99 98 49 48 24 12 6 3 2 1 (10 numeros)
 
Exemplo 2
Digite valor de N: 64
64 32 16 8 4 2 1 (7 numeros)
 
Exemplo 3
Digite valor de N: 0
Valor invalido
 
Exemplo 4
Digite valor de N: -4
Valor invalido


 
 
OBS.: Efetue o upload do arquivo contendo o código-fonte de seu programa. LEMBRE-SE QUE O NOME DO ARQUIVO DEVE TERMINAR COM O SUFIXO .cpp */
# include <stdio.h>

int main()
{
    int num, c = 0;
    printf("Digite valor de N: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d ", num);
        while (num >= 1)
        {
            if (num % 2 == 1 && num != 0)
            {
                num--;
                if(num != 0)
                    printf("%d  ", num);
                c++;
            }
            if(num != 0)
            {
                num = num / 2;
                printf("%d  ", num);
                c++;
            }
        }
        printf("(%d numeros)", c);
    }
    else
    {
        printf("Valor invalido.");
    }
    return 0;
}