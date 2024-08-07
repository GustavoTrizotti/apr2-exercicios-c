#include <stdio.h>
// Faça um programa que leia duas notas de provas e calcule e escreva a média simples delas. Escreva a saída com duas casas decimais.
int main() {
    float x, y;
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &x, &y);
    printf("Media: %.2f", (x + y) / 2);
    return 0;
}