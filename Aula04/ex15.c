// Francisco tem 1.50 metro e cresce 2 centímetros por ano, enquanto José tem 1.40 metros e cresce 3
// centímetros por ano. Escreva um programa mostre quantos anos serão necessários para que José tenha
// uma altura maior que a altura de Francisco

# include <stdio.h>

int main()
{
    int ano;
    float jose, francisco;
    francisco = 1.5;
    jose = 1.4;
    for (ano = 0; jose < francisco; ano++)
    {
        jose += 0.03;
        francisco +=0.02;
    }
    printf("ano: %d\nfrancisco altura : %.2f\njose altura: %.2f", ano, francisco, jose);
    return 0;
}
