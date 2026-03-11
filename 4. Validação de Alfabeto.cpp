#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {

    set<char> alfabeto;

    for (char c = 'a'; c <= 'z'; c++) {
        alfabeto.insert(c);
    }

    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    set<char> caracteresFrase;

    for (char c : frase) {
        if (c != ' ') {
            caracteresFrase.insert(c);
        }
    }

    bool fraseValida = true;

    for (char c : caracteresFrase) {
        if (!alfabeto.count(c)) {
            fraseValida = false;
            break;
        }
    }

    if (fraseValida) {
        cout << "A frase pertence ao alfabeto definido.\n";
    } else {
        cout << "A frase possui caracteres fora do alfabeto.\n";
    }

    return 0;
}