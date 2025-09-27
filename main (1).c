#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, op;
    printf("Escriba un numero: ");
    scanf("%d", &x);
    printf("Escriba la opcion: ");
    scanf("%d", &op);
    switch(op)
    {
        case 1: // es positivo o negativo
            if(x > 0)
                printf("Positivo");
            else
                printf("No positivo");
        break;
        case 2: // es par o impar
            if(x%2==0)
                printf("Par");
            else
                printf("Impar");
        break;
        default:
            printf("No se eligio nada");
    }

    return 0;
}
