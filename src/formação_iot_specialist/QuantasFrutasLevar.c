// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário;
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include<stdio.h>

int main() {
    int a, b, c, somaAB;
    scanf("%d %d %d", &a, &b, &c);
    somaAB = a + b;

    // TODO: Crie as condições necessárias para verificar se A + B é maior, menor ou igual a C
    if (somaAB > c) {
        printf("A + B é maior que  C");
    } else if (somaAB < c) {
        printf("A + B é menor que  C");
    } else {
        printf("A + B é igual a C");
    }

    getchar();
    return 0;
}
