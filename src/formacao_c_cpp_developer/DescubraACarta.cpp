#include <iostream>

#include <string>

using namespace std;

enum Naipe {
    Paus = 0, Ouros = 1, Copas = 2, Espadas = 3
};
enum Valor {
    As = 1, Valete = 2, Dama = 3, Rei = 4
};

class Carta {
private:
    Naipe naipe;
private:
    Valor valor;

public:
    Carta(Naipe n, Valor v) {
        naipe = n;
        valor = v;
    }

    Naipe getNaipe() {
        return naipe;
    }

    Valor getValor() {
        return valor;
    }
};

int main() {
    int valorEscolhido, naipeEscolhido;

    cin >> valorEscolhido;
    cin >> naipeEscolhido;

    // Criação da carta escolhida pelo usuário usando "static_cast" para converter as escolhas.
    Carta cartaEscolhida(static_cast<Naipe>(naipeEscolhido), static_cast<Valor>(valorEscolhido));

    //TODO: Implementar as condições necessárias para impressão da saída deste desafio.
    cout << "Carta escolhida: ";
    switch (cartaEscolhida.getValor()) {
        case As:
            cout << "Ás";
            break;
        case Valete:
            cout << "Valete";
            break;
        case Dama:
            cout << "Dama";
            break;
        case Rei:
            cout << "Rei";
            break;
    }

    cout << " de ";

    switch (cartaEscolhida.getNaipe()) {
        case Paus:
            cout << "Paus";
            break;
        case Ouros:
            cout << "Ouros";
            break;
        case Copas:
            cout << "Copas";
            break;
        case Espadas:
            cout << "Espadas";
            break;
    }

    cout << endl;

    return 0;
}
