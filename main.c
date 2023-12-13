#include <stdio.h>

void calcular(int num1, int num2, char operador){
    int resultado = 0;
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Verifica se o segundo número é diferente de zero para evitar divisão por zero
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro! Divisao por zero nao permitida.\n");
                return 1;  // Retorna um código de erro
            }
            break;
        default:
            printf("Operador invalido.\n");
            return 1;  // Retorna um código de erro
    }
}

int main() {
    char operador;
    double num1, num2, resultado;

    // Solicita ao usuário que insira a operação desejada
    printf("Digite a operacao (+, -, *, /): ");
    scanf("%c", &operador);

    // Solicita ao usuário que insira dois números
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &num1, &num2);

    calcular(num1,num2,operador);

    // Exibe o resultado
    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
