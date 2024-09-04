#include <stdio.h>
#include <math.h>

int mediaVeiculosHora(int tamanho, int veiculos[]) {
    if (tamanho < 1) {
        return 0;
    }
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += veiculos[i];
    }
    //TODO: Retornar a média arredondando o valor por meio da função "round".
    if (soma > 0) {
        soma = round((double) soma / tamanho);
    }
    return soma;
}

int main() {
    int tamanho, i;

    scanf("%d", &tamanho);

    int veiculos[tamanho];
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &veiculos[i]);
    }

    //TODO: Chamar a função "mediaVeiculosHora" e imprimir a saída de acordo com o enunciado.
    printf("Média de veículos por hora: %d", mediaVeiculosHora(tamanho, veiculos));
    return 0;
}
