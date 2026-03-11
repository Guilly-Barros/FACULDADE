#include <iostream>
using namespace std;

// Função para calcular a área
float calcularArea(float base, float altura) {
    return base * altura;
}

int main() {
    float base, altura, area;

    cout << "Digite a base do retangulo: ";
    cin >> base;

    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    area = calcularArea(base, altura);

    cout << "A area do retangulo e: " << area << endl;

    return 0;
}