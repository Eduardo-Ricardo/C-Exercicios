#include <stdio.h>


int main() 
{
    int idade, tempo;
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Tempo de contribuicao: ");
    scanf("%d", &tempo);
    if (idade >= 60 && tempo >= 25 || idade >= 65 || tempo >= 30)
    {
        printf("Voce ja pode se aposentar.");
    }
    else
    {
        printf("Voce ainda nao pode se aposentar.");
    }
    
    return 0;
}