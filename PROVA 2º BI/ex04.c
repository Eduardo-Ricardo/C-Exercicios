/* Quais são os índices (linha, coluna) que compõem a diagonal principal de uma matriz  de ordem 5x5? */
# include <stdio.h>

int main()
{
    printf("A diagonal principal fica onde esta o numero 1, ou seja,\numa diagonal principal existe quando uma matriz e quadrada e\na posicao da coluna e igual a posicao da linha");
    for(int c = 0; c < 5; c++)
    {   
        printf("\n");
        for(int d = 0; d < 5; d++)
        {
            if(c == d)
                printf("1   ");
            else
                printf("0   ");
        }
    }
    return 0;
}
