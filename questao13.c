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

    int opcao;
    float num1, num2, resultado;

    printf("-----CALCULADORA SIMPLES-----\n");
    printf("Escolha uma operação:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4)
    {
        printf("Opção inválida!\n");
        return 1;
    }

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Realiza a operação escolhida
    switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        printf("Resultado da adição: %.2f\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado da subtração: %.2f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado da multiplicação: %.2f\n", resultado);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Erro: divisão por zero não é permitida.\n");
        }
        else
        {
            resultado = num1 / num2;
            printf("Resultado da divisão: %.2f\n", resultado);
        }
        break;
    }

    system("pause");

    return 0;
}
