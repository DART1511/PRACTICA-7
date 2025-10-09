#include <stdio.h>

int main() {
    int uno, dos, tres;

    printf("Ingrese 3 números separados por espacios:\n");
    scanf("%d %d %d", &uno, &dos, &tres);

    if (uno > dos) {
        if (dos > tres) {
            // uno > dos > tres
            printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres);
        } else {
            if (uno > tres) {
                // uno > tres > dos
                printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos);
            } else {
                // tres > uno > dos
                printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos);
            }
        }
    } else {
        if (dos > tres) {
            if (tres > uno) {
                // dos > tres > uno
                printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno);
            } else {
                // dos > uno > tres
                printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres);
            }
        } else {
            // tres > dos > uno
            printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno);
        }
    }

    return 0;
}
