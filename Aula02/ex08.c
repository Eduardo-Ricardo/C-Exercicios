// Escreva um programa que permita entrar com o nome, a nota da prova 1 e a nota da prova 2 de um aluno. O programa 
// deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: 
// "Aprovado", "Reprovado" ou "em Prova Final" 
// (a média é 7 para aprovação, menor  que 4 para reprovação e as demais em exame final).

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    
    char nome[60];
    float media, nota01, nota02;
    
    printf("Seu nome: ");
    scanf("%s", &nome);

    printf("Nota da primeira prova: ");
    scanf("%f", &nota01);
    
    printf("Nota da segunda prova: ");
    scanf("%f", &nota02);
    
    media = (nota01 + nota02) / 2;
    
    printf("\n\n%s, aqui estão suas notas:\n", nome);
    printf("\n1° prova: %.1f \n", nota01);
    printf("2° prova: %.1f \n", nota02);
    printf("Média: %.1f\n", media);

    if (media >= 7)
    {
        printf("\nAprovado!!\n _____________________________________");
    }
    else if (media > 4)
    {
        printf("\nEm recuperação!\n _____________________________________");
    }
    else
    {
        printf("\nReprovado.\n _____________________________________");
    }    
    
    return 0;
}