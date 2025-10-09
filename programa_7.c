#include <stdio.h>

int main() {
    // Declaración de la enumeración
    enum boolean { NO, YES };

    // Declaración de una variable tipo enumeración
    enum boolean valorBooleano;
    valorBooleano = YES;

    // Se comprueba que el valor de una enumeración es entero
    printf("%d\n", valorBooleano);

    // Se comprueba que el valor de una enumeración se puede reasignar
    enum diasSemana { LUNES, MARTES, MIERCOLES = 5, JUEVES, VIERNES };

    printf("\n%d", LUNES);
    printf("\n%d", MARTES);
    printf("\n%d", MIERCOLES);
    printf("\n%d", JUEVES);
    printf("\n%d\n", VIERNES);

    return 0;
}
