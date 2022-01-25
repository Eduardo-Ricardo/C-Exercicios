/*Modifique a função "linha" do exercício anterior de tal forma que a quantidade de asteriscos seja um
argumento da mesma*/
#include <stdio.h>

void asterisco(int linha){
    for(int c = linha; c > 0; c--){
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
    int num = 5, lin = 20;
    asterisco(lin);
    printf("Numeros entre 1 e 5\n");
    asterisco(lin);
    mostraNum(num);
    asterisco(lin);
    return 0;
}