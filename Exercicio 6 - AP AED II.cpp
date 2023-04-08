#include <stdio.h>

void desenhar_numero(int num) {
    switch (num) {
        case 0:
            printf("*****\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 1:
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 2:
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            break;
        case 3:
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        case 4:
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 5:
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        case 6:
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 7:
            printf("*****\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 8:
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 9:
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        default:
            printf("Número inválido\n");
            break;
    }
}

int main() {
    int num = 6;
    desenhar_numero(num);
    return 0;
}
