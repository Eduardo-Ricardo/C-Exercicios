/*
Faça um algoritmo que apresente na tela o seguinte menu:
1. Digitar um número ímpar
2. Digitar um número par
3. Sair
Caso o usuário escolha a opção 1, ele deve digitar um número ímpar para voltar ao menu. O mesmo deve
ser feito na opção 2, mas para um número par. Caso escolha a opção 3, o algoritmo deve apresentar a
quantidade de números ímpares digitados na opção 1, a quantidade de números pares digitados na opção
2 e encerrar o algoritmo.

*/
# include <stdio.h>

int main()
{
    int escolha, par, impar, test;
    par = 0, impar = 0;
    while (escolha != 3)
    {
        printf("=-=-==-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("1. Digitar um numero impar\n2. Digitar um numero par\n3. Sair\n");
        printf("=-=-==-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n>>>>>>>>>>>>>>>>>>>:");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("Digite um numero impar: ");
            scanf("%d", &test);
            if (test % 2 == 1)
            {
                impar++;
            }
        }
        else if (escolha == 2)
        {
            printf("Digite um numero par: ");
            scanf("%d", &test);
            if (test % 2 == 0)
            {
                par++;
            }
        }
        else if (escolha < 1 || escolha > 3)
        {
            printf("...");
        }
        
        
    }
    printf("Quantidade de numeros pares : %d\nQuantidade de numeros impares : %d", par, impar);
    return 0;
}