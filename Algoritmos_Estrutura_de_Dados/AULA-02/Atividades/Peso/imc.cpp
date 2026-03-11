#include <stdio.h>

double calculaIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {

    double peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%lf", &peso);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    imc = calculaIMC(peso, altura);

    printf("Seu IMC e: %.2lf\n", imc);

    return 0;
}
