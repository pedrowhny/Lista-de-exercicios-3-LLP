#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes da equação do segundo grau (a, b e c):\n");
    
    printf("a: ");
    scanf("%f", &a);
    
    printf("b: ");
    scanf("%f", &b);
    
    printf("c: ");
    scanf("%f", &c);

    if (a == 0) // Verifica se a é zero
    {
        printf("Não é equação de segundo grau.\n");
    }

    else // Se a não for zero, calcula o discriminante (delta)
    {
        delta = b * b - 4 * a * c; // Cálculo do discriminante

        if (delta < 0) // Verifica se delta é negativo
        {
            printf("Não existe raiz real (∆ < 0).\n");
        }
        else if (delta == 0) // Verifica se delta é zero
        {
            x1 = -b / (2 * a); // Cálculo da raiz única
            printf("Raiz única: x = %.2f\n", x1);
        }
        else // Se delta for positivo, calcula as duas raízes reais
        {
            x1 = (-b + sqrt(delta)) / (2 * a); // Cálculo da primeira raiz
            x2 = (-b - sqrt(delta)) / (2 * a); // Cálculo da segunda raiz
            printf("Duas raízes reais:\n");
            
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    system("pause");

    return 0;
}
