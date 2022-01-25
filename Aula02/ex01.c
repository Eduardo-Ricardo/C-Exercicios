// Faça um programa que leia dois valores numéricos inteiros e efetue a adição. Caso o resultado seja
// maior que 10, apresentá-lo.

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int x, y;
  printf("Digite o 1° valor: ");
  scanf("%d", &x);
  printf("Digite o 2° valor: ");
  scanf("%d", &y);
  if (x + y > 10)
  {
    printf("%d", x + y);
  }
  return 0;
}