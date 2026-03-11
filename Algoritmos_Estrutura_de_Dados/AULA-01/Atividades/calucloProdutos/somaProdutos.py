def calcular_compra():
    total = 0
    while True:
        try:
            entrada = input("Digite o preço do produto (ou '0' para finalizar): ")
            entrada = entrada.replace(",", ".")
            preco = float(entrada)

            if preco == 0:
                break

            total += preco

        except ValueError:
            print("Entrada inválida. Por favor, digite um número válido.")

    return total


resultado = calcular_compra()
print(f"O total da compra é: R$ {resultado:.2f}")