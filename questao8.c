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

    int idade;
    char categoria[20];

    printf("-----NATAÇÃO-----\n\n");

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) // Categoria Infantil A
    {
        strcpy(categoria, "Infantil A"); // String
        printf("Você vai nadar na categoria %s\n", categoria);
    }

    else if (idade >= 8 && idade <= 10) // Categoria Infantil B
    {
        strcpy(categoria, "Infantil B"); // String
        printf("Você vai nadar na categoria %s\n", categoria);
    }

    else if (idade >= 11 && idade <= 13) // Categoria Juvenil A
    {
        strcpy(categoria, "Juvenil A"); // String
        printf("Você vai nadar na categoria %s\n", categoria);
    }

    else if (idade >= 14 && idade <= 17) // Categoria Juvenil B
    {
        strcpy(categoria, "Juvenil B"); // String
        printf("Você vai nadar na categoria %s\n", categoria);
    }

    else if (idade >= 18) // Sênior
    {
        strcpy(categoria, "Sênior"); // String
        printf("Você vai nadar na categoria %s\n", categoria);
    }

    else // Caso contrário
    {
        printf("Idade inválida para participar.\n");
    }

    system("pause");

    return 0;
}