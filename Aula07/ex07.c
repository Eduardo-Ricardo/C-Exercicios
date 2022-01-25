/* Construa uma função que retorne o maior valor entre três números inteiros */
int main()
{
    int x, y;
    printf("digite o valor de x: ");
    scanf("%d", &x);
    printf("digite o valor de y: ");
    scanf("%d", &y);    
    printf("Dos numeros comparados maior e: ");
    comp(x,y);   
    return 0;
}

int comp(int x, int y)
{
    if (x > y)
        return printf("x (%d)", x);
    else
        return printf("y (%d)", y);
}