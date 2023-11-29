#include <stdio.h>

// Função para realizar operações aritméticas básicas
float calcular(float num1, float num2, char operador) {
    switch (operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            // Verifica se o divisor é zero antes de realizar a divisão
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Erro! Divisao por zero nao permitida.\n");
                return 0.0;  
            }
        default:
            printf("Operacao invalida.\n");
            return 0.0;  
    }
}

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operador);

    // Realiza operações aritméticas básicas
    resultado = calcular(num1, num2, operador);

    // Exibe o resultado das operações aritméticas básicas
    printf("Resultado: %.2f\n", resultado);

    // Exemplo de operações binárias e hexadecimais
    printf("Operacoes binarias e hexadecimais:\n");
    printf("AND binario: %.0f\n", (float)((int)num1 & (int)num2));
    printf("OR binario: %.0f\n", (float)((int)num1 | (int)num2));
    printf("XOR binario: %.0f\n", (float)((int)num1 ^ (int)num2));
    printf("NOT binario (do primeiro numero): %.0f\n", (float)(~(int)num1));
    printf("Soma hexadecimal: %.0f\n", (float)((int)num1 + (int)num2));

    return 0;
}
