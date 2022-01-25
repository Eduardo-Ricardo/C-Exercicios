// Escreva um programa que leia a nota e o número de faltas de um aluno, e escreva seu conceito. De
// acordo com a tabela a seguir, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
// Nota Conceito (até 20 faltas) Conceito (mais de 20 faltas)
// +------------------+---+---+
// | 10 >= media >= 9 | A | B |
// | 9  >  media >= 7 | B | C |
// | 7  >  media >= 5 | C | D |
// | 5  >  media >= 4 | D | E |
// | 4  >  media >= 0 | E | E |
// +------------------+---+---+

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[60];
    float media, nota01, nota02, faltas;
    {
    printf("Seu nome: ");
    scanf("%s", &nome);

    printf("Nota da primeira prova: ");
    scanf("%f", &nota01);
    
    printf("Nota da segunda prova: ");
    scanf("%f", &nota02);
    
    printf("Faltas: ");
    scanf("%f", &faltas);
    }
    media = (nota01 + nota02) / 2;
    {
    printf("\n\n%s, aqui estão suas notas:\n", nome);
    printf("\n1° prova: %.1f \n", nota01);
    printf("2° prova: %.1f \n", nota02);
    printf("Média: %.1f\n", media);
    }
    if (10 >= media && media >= 9)
    {
        printf("A");
        if (faltas > 20)
        {
            printf("B");
        }
        
    }
    else if (9  >  media && media >= 7)
    {
        printf("B");
        if (faltas > 20)
        {
            printf("C");
        }
        
    }  
    else if (7  >  media && media >= 5)
    {
        printf("C");
        if (faltas > 20)
        {
            printf("D");
        }
        
    }
    else if (5  >  media && media >= 4)
    {
        printf("D");
        if (faltas > 20)
        {
            printf("E");
        }
        
    }
    else
    {
        printf("E");
        if (faltas > 20)
        {
            printf("E");
        }
        
    }
    return 0;