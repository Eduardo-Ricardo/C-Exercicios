/*Escreva um programa que escreva na tela a seguinte saída, escrevendo uma linha com 20 asteriscos
através de um laço for:
********************
Números entre 1 e 5
********************
1
2
3
4
5
********************
*/
#include <stdio.h>

void asterisco(){
    for(int c = 0; c < 20; c++){
        printf("*");
        
    }
    printf("\n");
    return;
}
int mostraNum(int num){
    if(num >= 1)
    {
        printf("%d\n", num);
        return mostraNum(num - 1);
    }
    return 0;
}
int main()
{
    int num = 5;
    asterisco();
    printf("Numeros entre 1 e 5\n");
    asterisco();
    mostraNum(num);
    asterisco();
    return 0;
}
