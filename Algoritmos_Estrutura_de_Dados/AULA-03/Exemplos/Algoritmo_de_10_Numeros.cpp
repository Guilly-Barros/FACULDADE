#include <iostream>
using namespace std;

int main() {
    int numeros[10];

    // Leitura dos 10 números
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> numeros[i];
    }

    // Exibição na ordem digitada
    cout << "\nNumeros na ordem em que foram digitados:\n";
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}