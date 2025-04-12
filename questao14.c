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

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if ((numero % 3 == 0) && (numero % 5 == 0)) // Verifica se o número é divisível por 3 e 5
    {
        printf("O número é divisível por 3 e por 5 simultaneamente.\n");
    }
    
    else if ((numero % 3 == 0) || (numero % 5 == 0)) // Verifica se o número é divisível por 3 ou 5, mas não por ambos
    { 
        printf("O número é divisível por 3 ou por 5, mas não por ambos.\n");
    }
    
    else // Caso contrário
    { 
        printf("O número não é divisível nem por 3 nem por 5.\n");
    }

    system("pause");

    return 0;
}
