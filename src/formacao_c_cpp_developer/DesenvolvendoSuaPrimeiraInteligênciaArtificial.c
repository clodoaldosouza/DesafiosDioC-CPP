#include <stdio.h>

int main() {
    float peso, altura;
    char temPelos, ehMamifero;

    scanf("%f", &peso);
    scanf("%f", &altura);
    //Como scanf lê os caracteres no buffer de entrada (teclado), quando digitamos um caractere e
    //teclamos enter, o caractere '\n' vai para o buffer e é lido pelo próximo scanf (que espera um char).
    //Para resolover essa situação, basta inserir um espaço entre a aspa e o símbolo %c:
    scanf(" %c", &temPelos);
    scanf(" %c", &ehMamifero);

    //TODO: Implementar o restante das condições para que todos os animais sejam categorizados.
    if (peso >= 2000 && altura >= 300) {
        printf("O animal é um elefante!");
    } else if (ehMamifero == 's' && temPelos == 's' && altura == 150) {
        printf("O animal é um cavalo!");
    } else if (ehMamifero == 's' && temPelos == 's' && altura <= 100) {
        printf("O animal é um cachorro!");
    } else if (ehMamifero != 's' && temPelos != 's') {
        printf("O animal é uma serpente!");
    } else if (ehMamifero == 's' && temPelos != 's') {
        printf("O animal é uma tartaruga!");
    } else {
        printf("Não foi possível classificar o animal!");
    }

    return 0;
}
