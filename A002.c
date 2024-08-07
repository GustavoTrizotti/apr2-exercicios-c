#include <stdio.h>
// Faça um programa que leia dois números inteiros e imprima o valor da soma deles, a diferença do primeiro pro segundo e a multiplicação entre eles.
int main() {
    int x, y; 
    printf("\nDigite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Soma: %d\nSubtracao: %d\nMultiplicacao: %d\n", x + y, x - y, x * y);
    return 0;
}