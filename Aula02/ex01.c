// Fa�a um programa que leia dois valores num�ricos inteiros e efetue a adi��o. Caso o resultado seja
// maior que 10, apresent�-lo.

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int x, y;
  printf("Digite o 1� valor: ");
  scanf("%d", &x);
  printf("Digite o 2� valor: ");
  scanf("%d", &y);
  if (x + y > 10)
  {
    printf("%d", x + y);
  }
  return 0;
}