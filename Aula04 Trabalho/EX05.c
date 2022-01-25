// 5 - No calendário gregoriano, um ano normal consiste em 365 dias. Como o comprimento real de um ano 
// sideral (o tempo necessário para a Terra girar uma vez sobre o Sol) é na verdade de 365,2425 dias, um 
// "ano bissexto" de 366 dias é usado uma vez a cada quatro anos para eliminar o erro causado por três anos normais 
// (mas curtos). Qualquer ano que seja divisível por 4 é um ano bissexto: por exemplo, 1988, 1992 e 1996 são anos 
// bissextos. No entanto, ainda há um pequeno erro que deve ser contabilizado. Para eliminar esse erro, o calendário 
// gregoriano estipula que um ano que é divisível por 100 (por exemplo, 1900) é um ano bissexto apenas se também é 
// igualmente divisível por 400.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano;
    printf("ANO: ");
    scanf("%d", &ano);
    if ((ano > 0 && ano % 4 == 0 && ano % 100 != 0)||(ano % 100 == 0 && ano % 400 == 0))
    {
        printf("O ano %d é bissesto.", ano);
    }
    else
    {
        printf("O ano %d não é bissesto.", ano);
    }
    return 0;
}
