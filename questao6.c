#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    float altura;
    int genero; 
    float ideal;

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Escolha seu sexo:\n1 - Masculino\n2 - Feminino\n");
    scanf("%d", &genero);

    if (genero == 1) // Gênero masculino
    {
        ideal = (72.7 * altura) - 58; // Fórmula do peso ideal masculino
        printf("Peso ideal como homem: %.2f kg\n", ideal);
    }

    else if (genero == 2) // Gênero feminino
    {
        ideal = (62.1 * altura) - 44.7; // Fórmula do peso ideal feminino
        printf("Peso ideal como mulher: %.2f kg\n", ideal);
    }

    else // Caso contrário
    {
        printf("Opção de gênero inválida.\n");
    }

    system("pause");

    return 0;
}