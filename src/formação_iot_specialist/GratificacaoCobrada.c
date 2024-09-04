// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário;
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include<stdio.h>

#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

int main() {
    float salarioBase, gratificacao, imposto, salarioFinal;
    scanf("%f", &salarioBase);

    //TODO: Calcule a gratificação, o imposto e o salário final. Em seguida print no console o salário final.
    gratificacao = salarioBase * GRATIFICACAO;
    imposto = salarioBase * IMPOSTO;
    salarioFinal = salarioBase + gratificacao - imposto;
    printf("Salario final: %.2f", salarioFinal);
    getchar();
    return 0;
}
