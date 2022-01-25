// Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado.
// Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um
// programa em informe se uma equipe foi classificada, de acordo com a seguinte especificação:
// * Ler os pontos obtidos por cada jogador da equipe;
// * Mostrar esses valores em ordem decrescente;
// * imprimir a mensagem "Equipe desclassificada".
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("Pontuação do 1° atleta: ");
    scanf("%d", &a);
    printf("Pontuação do 2° atleta: ");
    scanf("%d", &b);
    printf("Pontuação do 3° atleta: ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        if (b < c)
        {
            printf("| %d | %d | %d |", a, b, c);
        }
        else
        {
            printf("| %d | %d | %d |", a, c, b);
        }
        
    }
    else if (b < c && b < a)
    {
        if (a < c)
        {
            printf("| %d | %d | %d |", b, a, c);
        }
        else
        {
            printf("| %d | %d | %d |", b, c, a);
        }
    }
    else
    {
        if (a < b)
        {
            printf("| %d | %d | %d |", c, a, b);
        }
        else
        {
            printf("| %d | %d | %d |", c, b, a);
        }
    }
    printf("\n  Desclassificado!");
    return 0;
}