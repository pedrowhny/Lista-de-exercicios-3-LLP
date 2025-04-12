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

    int num1, num2;

    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &num2);

    if (num1 > num2) // Condicional que verifica se o primeiro número é maior 
    {
        printf("O primeiro número é o maior\n");
    }
    
    else // Caso contrário
    {
        printf("O segundo número é o maior\n");
    }

    system("pause");

    return 0;
}