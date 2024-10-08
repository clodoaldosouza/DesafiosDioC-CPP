// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário;
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include<stdio.h>

int main() {
    float precoFabrica, lucro, impostos, precoFinal;
    float percentualLucro, percentualImpostos;

    scanf("%f", &precoFabrica);
    scanf("%f", &percentualLucro);
    scanf("%f", &percentualImpostos);

    //TODO: Calcule o lucro, o imposto e o preço final. Em seguida print os três, em sequência um abaixo do outro, no
    // console
    lucro = precoFabrica * (percentualLucro / 100);
    impostos = precoFabrica * (percentualImpostos / 100);
    precoFinal = precoFabrica + lucro + impostos;
    printf("Lucro: R$ %.2f\n", lucro);
    printf("Impostos: R$ %.2f\n", impostos);
    printf("Preco final: R$ %.2f\n", precoFinal);

    getchar();
    return 0;
}
