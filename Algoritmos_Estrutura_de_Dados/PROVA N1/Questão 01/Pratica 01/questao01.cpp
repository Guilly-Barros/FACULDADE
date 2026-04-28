
// TAREFA PRATICA EM C++:
// Crie um vetor que armazene a quantidade de vendas de 30 produtos em um dia.

#include <iostream>

int main() {
    int vendas[30];
    
    std::cout << "Digite as vendas:\n";
    for (int i = 0; i < 30; i++) {
        std::cout << "Produto " << (i + 1) << ": ";
        std::cin >> vendas[i];
    }

    std::cout << "\nVendas:\n";
    for (int i = 0; i < 30; i++) {
        std::cout << "Produto " << (i + 1) << ": " << vendas[i] << "\n";
    }

    return 0;
}