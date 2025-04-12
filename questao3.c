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

    int num;

    printf("Digite um número inteiro: \n");
    scanf("%d", &num);

    if (num % 2 == 0) // Verifica se o número é par
    {
        printf("O número é par\n");
    }

    else // Caso contrário
    {
        printf("O número é ímpar\n");
    }

    system("pause");

    return 0;
}