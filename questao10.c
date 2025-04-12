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

    int num1, num2, num3, opcao;
    double resultado;

    printf("Digite três números inteiros positivos:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Verificação de positividade
    if (num1 <= 0 || num2 <= 0 || num3 <= 0)
    {
        printf("Todos os números devem ser positivos.\n");
        return 1;
    }

    printf("Escolha o tipo de media:\n");
    printf("1: Geométrica\n");
    printf("2: Ponderada (pesos: 1, 2 e 3)\n");
    printf("3: Harmônica\n");
    printf("4: Aritmética\n");
    scanf("%d", &opcao);

    // Cálculo da média conforme a opção
    switch (opcao)
    {
    case 1: // Geométrica
        resultado = cbrt(num1 * num2 * num3);
        break;
    case 2: // Ponderada
        resultado = (num1 * 1 + num2 * 2 + num3 * 3) / 6.0;
        break;
    case 3: // Harmônica
        resultado = 3.0 / (1.0 / num1 + 1.0 / num2 + 1.0 / num3);
        break;
    case 4: // Aritmética
        resultado = (num1 + num2 + num3) / 3.0;
        break;
    default:
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("Resultado da media: %.2f\n", resultado);

    system("pause");

    return 0;
}