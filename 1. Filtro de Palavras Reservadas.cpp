#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {

    set<string> reservadas = {
        "if","else","while","for","return","int",
        "System","out","print","public","class"
    };

    set<string> palavrasCodigo = {
        "public","class","StarRectangle","void",
        "printRectangle","int","n",
        "for","i","j",
        "System","out","print","println",
        "printBottonLeftTriangle",
        "printTopRightTriangle",
        "if","else"
    };

    set<string> palavrasReservadasEncontradas;
    set<string> identificadores;

    for (auto palavra : palavrasCodigo) {
        if (reservadas.count(palavra)) {
            palavrasReservadasEncontradas.insert(palavra);
        } else {
            identificadores.insert(palavra);
        }
    }

    cout << "Palavras reservadas encontradas:\n";
    for (auto p : palavrasReservadasEncontradas) {
        cout << p << endl;
    }

    cout << "\nPossiveis identificadores:\n";
    for (auto p : identificadores) {
        cout << p << endl;
    }

    return 0;
}