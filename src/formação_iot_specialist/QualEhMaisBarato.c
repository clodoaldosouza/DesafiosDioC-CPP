// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário;
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // TODO: Crie as condições necessárias para que verifique, dentre os três valores da entrada, qual é o maior e print no console em
    // ordem decrescente

    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    if (maior == a) {
        printf("%d, %d, %d", maior, (b > c) ? b : c, (b > c) ? c : b);
    } else if (maior == b) {
        printf("%d, %d, %d", maior, (a > c) ? a : c, (a > c) ? c : a);
    } else {
        printf("%d, %d, %d", maior, (a > b) ? a : b, (a > b) ? b : a);
    }
    getchar();
    return 0;
}
