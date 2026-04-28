// Crie uma matriz 7x3 que armazene os chamados recebidos em cada dia da semana separados por prioridade.
#include <iostream>
#include <numeric>
#include <algorithm>

int main() {
    int chamados[7][3];
    
    std::cout << "Digite os chamados recebidos (7 dias, 3 prioridades):\n";
    for (int i = 0; i < 7; i++) {
        std::cout << "Dia " << (i + 1) << ": ";
        for (int j = 0; j < 3; j++) {
            std::cin >> chamados[i][j];
        }
    }

    // Exibir os chamados de todos os dias
    std::cout << "\nChamados recebidos:\n";
    for (int i = 0; i < 7; i++) {
        std::cout << "Dia " << (i + 1) << ": ";
        for (int j = 0; j < 3; j++) {
            std::cout << chamados[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}