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
    float peso;
    char categoria[20];
    int categoria_codigo;

    printf("-----CATEGORIAS PESSOAS-----\n\n");

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    if (altura < 1.20)
    {
        if (peso < 60)
        {
            categoria_codigo = 1; // Categoria A
        }
        else if (peso >= 60 && peso <= 90)
        {
            categoria_codigo = 4; // Categoria D
        }
        else
        {
            categoria_codigo = 7; // Categoria G
        }
    }
    else if (altura >= 1.20 && altura <= 1.70)
    {
        if (peso < 60)
        {
            categoria_codigo = 2; // Categoria B
        }
        else if (peso >= 60 && peso <= 90)
        {
            categoria_codigo = 5; // Categoria E
        }
        else
        {
            categoria_codigo = 8; // Categoria H
        }
    }
    
    else
    { // altura > 1.70
        if (peso < 60)
        {
            categoria_codigo = 3; // Categoria C
        }
        else if (peso >= 60 && peso <= 90)
        {
            categoria_codigo = 6; // Categoria F
        }
        else
        {
            categoria_codigo = 9; // Categoria I
        }
    }

    switch (categoria_codigo) // Switch case
    {
    case 1:
        strcpy(categoria, "categoria A");
        break;
    case 2:
        strcpy(categoria, "categoria B");
        break;
    case 3:
        strcpy(categoria, "categoria C");
        break;
    case 4:
        strcpy(categoria, "categoria D");
        break;
    case 5:
        strcpy(categoria, "categoria E");
        break;
    case 6:
        strcpy(categoria, "categoria F");
        break;
    case 7:
        strcpy(categoria, "categoria G");
        break;
    case 8:
        strcpy(categoria, "categoria H");
        break;
    case 9:
        strcpy(categoria, "categoria I");
        break;
    default:
        strcpy(categoria, "categoria inválida");
        break;
    }

    printf("Pertence a %s\n", categoria);

    system("pause");

    return 0;
}