#include <stdio.h>

int main() {
    int x, y; 
    printf("\nDigite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Soma: %d\nSubtracao: %d\nMultiplicacao: %d\n", x + y, x - y, x * y);
    return 0;
}