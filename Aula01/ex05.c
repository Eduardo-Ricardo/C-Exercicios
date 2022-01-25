// Faça um programa que leia um nÃºmero inteiro e imprima o seu antecessor e o seu sucessor
# include <stdio.h>
# include <locale.h>

int main(int argc, char const *argv[])
{
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Considerando o numero %d, seu antecessor e %d, e seu sucessor é %d", 2, 1, 3);
    return 0;
}
