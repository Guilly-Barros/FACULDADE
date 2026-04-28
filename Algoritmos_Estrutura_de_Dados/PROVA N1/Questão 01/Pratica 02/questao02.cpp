// Questão 02: Implemente funções para calcular o total de vendas, calcular a media de vendas, retornar o indice do produto mais vendido.

#include <iostream>
#include <numeric> 
#include <algorithm>

int totalVendas(int vendas[], int size) {
    return std::accumulate(vendas, vendas + size, 0);
}

double mediaVendas(int vendas[], int size) {
    return static_cast<double>(totalVendas(vendas, size)) / size;
}

int produtoMaisVendido(int vendas[], int size) {
    return std::distance(vendas, std::max_element(vendas, vendas + size));
}

int main() {
    int vendas[30];
    
    std::cout << "Digite as vendas:\n";
    for (int i = 0; i < 30; i++) {
        std::cout << "Produto " << (i + 1) << ": ";
        std::cin >> vendas[i];
    }

    std::cout << "\nTotal de vendas: " << totalVendas(vendas, 30) << "\n";
    std::cout << "Media de vendas: " << mediaVendas(vendas, 30) << "\n";
    std::cout << "Produto mais vendido: Produto " << (produtoMaisVendido(vendas, 30) + 1) << "\n";

    return 0;
}
