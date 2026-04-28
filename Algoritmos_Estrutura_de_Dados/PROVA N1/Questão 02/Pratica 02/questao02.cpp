// Implemente funções para: exibir os chamados de todos os dias, calcular o total de chamados por prioridade na semana, determinar qual foi o dia com maior numero de chamados, determinar qual foi a prioridade mais frequente.


#include <iostream>
#include <numeric>
#include <algorithm>

int main() {
    int chamados[7][3];

    std::cout << "Digite os chamados recebidos (7 dias, 3 prioridades):\n";
    for (int i = 0; i < 7; i++) {
        std::cout << "Dia " << (i + 1) << ": ";
        for (int j = 0; j < 3; j++) {
            std::cout << chamados[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int totalChamadosPorPrioridade(int chamados[7][3], int prioridade) {
    int total = 0;
    for (int i = 0; i < 7; i++) {
        total += chamados[i][prioridade];
    }
    return total;
}

int diaComMaiorNumeroDeChamados(int chamados[7][3]) {
    int maxChamados = 0;
    int diaMax = 0;
    for (int i = 0; i < 7; i++) {
        int totalDia = std::accumulate(chamados[i], chamados[i] + 3, 0);
        if (totalDia > maxChamados) {
            maxChamados = totalDia;
            diaMax = i;
        }
    }
    return diaMax;
}

int prioridadeMaisFrequente(int chamados[7][3]) {
    int totalPrioridades[3] = {0};
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 3; j++) {
            totalPrioridades[j] += chamados[i][j];
        }
    }
    return std::distance(totalPrioridades, std::max_element(totalPrioridades, totalPrioridades + 3));
}