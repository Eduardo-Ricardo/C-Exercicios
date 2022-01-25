/*
Crie um programa que calcule e escreva a soma dos 50 primeiros termos da série:

1000/1 - 997/2 + 994/3 - 991/4 ...
*/
# include <stdio.h>

int main()
{
    int i;
    float x, y, divisao, soma;
    x = 1000;
    y = 1;
    for (i = 1; i <+ 50; i++)
    {
        
        divisao = x/y;
        if(i % 2 == 0)
        {
            soma -= divisao;
        }
        else
        {
            soma += divisao;
        }
        
        x -= 3; 
        y++;
        printf("%.2f\n", soma);
    }
        
    return 0;
}
