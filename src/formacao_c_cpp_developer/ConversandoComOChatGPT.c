#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[100];

    //O padrão "%[^\n]" lê o texto digitado até a tecla "enter", armazenando o texto na variável.
    scanf("%[^\n]", mensagem);

    //A atribuição inicial da variável palavra usa a função strtok() para obter a primeira
    //palavra da string, com base no caractere de separação especificado.
    char *palavra = strtok(mensagem, " ");

    while (palavra != NULL) {
        //TODO: Imprimir a palavra duplicando-a e atentando-se à formatação.
        printf("%s %s ", palavra, palavra);
        palavra = strtok(NULL, " ");
        //TODO: Obter a próxima palavra usando a função "strtok".
        //Dica: A atribuição subsequente pode usar a chamada strtok(NULL, " ") para obter a
        //próxima palavra da string, continuando a partir do ponto em que a chamada anterior parou.
    }
    return 0;
}
