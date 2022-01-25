/* Escreva uma função que retorne o valor absoluto de um número. */

#include <stdio.h>

int absoluto(int num){
    printf("valor absoluto do numero %d\n", num);
    if(num >= 100)
    {
        printf("%d = %d", num / 100, num / 100);
    }
    return 0;
}
int main()
{
    absoluto(335);
    return 0;
}
