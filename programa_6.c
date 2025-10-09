#include <stdio.h>

int main(void)
{
    int op = 0;

    printf("\tMenú\n\n");
    printf("Elegir la opción deseada\n");
    printf("(1) Ingresar\n");
    printf("(2) Registrarse\n");
    printf("(3) Salir\n");
    printf("> ");

    if (scanf("%d", &op) != 1) {
        printf("Entrada no válida.\n");
        return 0;
    }

    switch (op)
    {
        case 1:
            printf("Se seleccionó 'Ingresar'.\n");
            break;
        case 2:
            printf("Se seleccionó 'Registrarse'.\n");
            break;
        case 3:
            printf("Se seleccionó 'Salir'.\n");
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}
