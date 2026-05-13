#include <stdio.h>
#include <stdbool.h>

// Função para calcular horas, minutos e segundos
void calcularHMS(int total_segundos) {
    int horas, minutos, segundos;

    horas = total_segundos / 3600;
    total_segundos = total_segundos % 3600;

    minutos = total_segundos / 60;
    segundos = total_segundos % 60;

    printf("\nResultado: %d horas, %d minutos e %d segundos\n",
           horas, minutos, segundos);
}

// Função para verificar se é par
bool isPar(int numero) {
    return numero % 2 == 0;
}

// Função para verificar se é ímpar
bool isImpar(int numero) {
    return numero % 2 != 0;
}

// Função para calcular média
float media(float n1, float n2) {
    return (n1 + n2) / 2;
}

// Função para retornar o maior número
float maior(float n1, float n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

// Função para retornar o menor número
float menor(float n1, float n2) {
    if (n1 < n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {

    int segundos;
    int numero;

    float num1, num2;

    // HMS
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    calcularHMS(segundos);

    // PAR OU ÍMPAR
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (isPar(numero)) {
        printf("O numero %d eh PAR\n", numero);
    } else {
        printf("O numero %d NAO eh PAR\n", numero);
    }

    if (isImpar(numero)) {
        printf("O numero %d eh IMPAR\n", numero);
    } else {
        printf("O numero %d NAO eh IMPAR\n", numero);
    }

    // MÉDIA, MAIOR E MENOR
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Media: %.2f\n", media(num1, num2));

    printf("Maior numero: %.2f\n", maior(num1, num2));

    printf("Menor numero: %.2f\n", menor(num1, num2));

    system("PAUSE");

    return 0;
}
