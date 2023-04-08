#include <stdio.h>

int main() {
    char c;
    printf("Digite um caractere MAIUSCULO: \n");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("%c esta entre A e Z\n", c);
    } else {
        printf("%c nao esta entre A e Z\n", c);
    }

    return 0;
}
