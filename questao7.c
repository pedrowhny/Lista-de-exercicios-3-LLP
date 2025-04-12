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

    float valor;
    int estado; 
    float taxa;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valor);

    printf("Escolha o Estado para envio:\n1 - MG\n2 - MS\n3 - RJ\n4 - SP\n");
    scanf("%d", &estado);
    

    if (estado == 1) // MG
    {
        taxa = valor * 0.07; // Valor + taxa de 7%
        printf("Valor da taxação para o produto: %.2f\n", taxa);
        printf("Produto com a taxa: %.2f\n", valor+taxa);
    }

    else if (estado == 2) // MS
    {
        taxa = valor * 0.08; // Valor + taxa de 8%
        printf("Valor da taxação para o produto: %.2f\n", taxa);
        printf("Produto com a taxa: %.2f\n", valor+taxa);
    }

    else if (estado == 3) // RJ
    {
        taxa = valor * 0.15; // Valor + taxa de 15%
        printf("Valor da taxação para o produto: %.2f\n", taxa);
        printf("Produto com a taxa: %.2f\n", valor+taxa);
    }

    else if (estado == 4) // SP
    {
        taxa = valor * 0.12; // Valor + taxa de 12%
        printf("Valor da taxação para o produto: %.2f\n", taxa);
        printf("Produto com a taxa: %.2f\n", valor+taxa);
    }

    else // Caso contrário
    {
        printf("Erro! Opção de Estado inválida.\n");
    }

    system("pause");

    return 0;
}