#include <stdio.h>
// Faça um programa que leia o nome de um(a) aluno(a). Após isso, o programa deve ler duas notas de provas. O programa deve calcular da média simples delas e escrever a saída conforme modelo abaixo. A média deve ser escrita com duas casas decimais.

int main() {
    char nome[20];
    float nota1, nota2;
    printf("\nDigite o nome do aluno: ");
    scanf("%s", nome);
    printf("\nDigite duas notas do aluno: ");
    scanf("%f %f", &nota1, &nota2);
    printf("%s obteve %.2f de media", nome, (nota1 + nota2) / 2);
    return 0;
}