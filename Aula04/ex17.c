/*Fazer um programa que calcule e escreva o valor de S, de acordo com a seguinte fórmula:

s = 1/1 + 3/2 + 5/3 + 7/4 ... + 99/50

*/

# include <stdio.h>

int main()
{
    float s, x, y;
    s = 0;
    printf("s = 0\n");
    for (x = 1, y = 1; x < 100 && y < 51; x += 2 , y++)
    {
        printf("s = (%.2f) + %.0f/%.0f \n", s, x, y);
        s += x/y;
    }
    printf("s = %.2f", s);
    return 0;
}   