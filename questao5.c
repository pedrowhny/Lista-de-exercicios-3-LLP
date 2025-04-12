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

    float num;
    float resultado_exponenciado;
    float resultado_raiz;

    printf("Digite um número positivo: \n");
    scanf("%f", &num);

    if (num > 0) // Verifica se o número é positivo
    {
        resultado_exponenciado = pow(num, 2); // Exponenciação
        resultado_raiz = sqrt(num); // Raiz
        printf("Número ao quadrado: %.2f\n", resultado_exponenciado);
        printf("Raiz: %.2f\n", resultado_raiz);
    }

    else // Caso contrário
    {
        printf("O número digitado não é positivo\n");
    }

    system("pause");

    return 0;
}