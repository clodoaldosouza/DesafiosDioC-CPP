#include <stdio.h>
#include <math.h>

int main() {
    int largura, comprimento, area, tempo;

    scanf("%d", &largura);
    scanf("%d", &comprimento);

    //TODO: Calcular a área do local e o tempo que o robo levará para limpá-lo.
    area = largura * comprimento;
    tempo = ceil(area / 5.0);
    //TODO: Imprimir a saída de acordo com o enunciado deste desafio.
    printf("O robô de limpeza levará %d minutos para limpar a sala.", tempo);
    return 0;
}
