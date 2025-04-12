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

    float salario;
    float prestacao;

    printf("-----CONCESSÃO DE EMPRÉSTIMO-----\n\n");

    printf("Digite seu salário mensal: \n");
    scanf("%f", &salario);

    printf("Digite a prestação do empréstimo: \n");
    scanf("%f", &prestacao);

    if (prestacao * 20 > salario) // Verifica se a prestação do empréstimo é 20% maior que o salario
    {
        printf("Empréstimo  não concedido.\n");
    }

    else // Caso contrário
    {
        printf("Empréstimo concedido.\n");
    }

    system("pause");

    return 0;
}