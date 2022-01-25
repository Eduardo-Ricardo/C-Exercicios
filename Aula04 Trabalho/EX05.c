// 5 - No calend�rio gregoriano, um ano normal consiste em 365 dias. Como o comprimento real de um ano 
// sideral (o tempo necess�rio para a Terra girar uma vez sobre o Sol) � na verdade de 365,2425 dias, um 
// "ano bissexto" de 366 dias � usado uma vez a cada quatro anos para eliminar o erro causado por tr�s anos normais 
// (mas curtos). Qualquer ano que seja divis�vel por 4 � um ano bissexto: por exemplo, 1988, 1992 e 1996 s�o anos 
// bissextos. No entanto, ainda h� um pequeno erro que deve ser contabilizado. Para eliminar esse erro, o calend�rio 
// gregoriano estipula que um ano que � divis�vel por 100 (por exemplo, 1900) � um ano bissexto apenas se tamb�m � 
// igualmente divis�vel por 400.

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
        printf("O ano %d � bissesto.", ano);
    }
    else
    {
        printf("O ano %d n�o � bissesto.", ano);
    }
    return 0;
}
