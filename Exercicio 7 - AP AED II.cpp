#include <stdio.h>

int cubo(int x) {
    return x * x * x;
}

int main() {
    int num = 3;
    int resultado = cubo(num);
    printf("O cubo de %d é %d\n", num, resultado);
    return 0;
}
