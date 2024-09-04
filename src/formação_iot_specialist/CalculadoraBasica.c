// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário;
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include<stdio.h>

int main() {
    int opcao;
    float a, b, resultado;
    scanf("%d", &opcao);
    scanf("%f %f", &a, &b);

    // TODO: Crie as condições necessárias para que a calculadora funcione corretamente com as entradas e print o resultado no console
    switch (opcao) {
        case 1:
            resultado = a * b;
            printf("Multiplicacao = %.2f", resultado);
            break;
        case 2:
            resultado = a + b;
            printf("Soma = %.2f", resultado);
            break;
        case 3:
            resultado = a - b;
            printf("Subtracao = %.2f", resultado);
            break;
        case 4:
            resultado = a / b;
            printf("Divisao = %.2f", resultado);
            break;
    }

    getchar();
    return 0;
}
