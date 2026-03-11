import math

def permutacao_rotores(total_rotores=5, rotores_usados=3):
    """
    Calcula a quantidade de maneiras de escolher e ordenar
    3 rotores dentre 5 disponíveis.
    Fórmula: P(n, k) = n! / (n-k)!
    """
    return math.factorial(total_rotores) // math.factorial(total_rotores - rotores_usados)

def posicoes_iniciais(letras=26, rotores_usados=3):
    """
    Cada rotor pode iniciar em 26 posições.
    Total = 26^3
    """
    return letras ** rotores_usados

def combinacoes_plugboard(letras=26, cabos=10):
    """
    Calcula o número de combinações possíveis no plugboard.

    Fórmula:
    C(26, 2) * C(24, 2) * C(22, 2) * ... para formar os pares,
    dividido por 10! porque a ordem dos cabos não importa.

    Forma equivalente:
    26! / ((26 - 2*cabos)! * 2^cabos * cabos!)
    """
    return math.factorial(letras) // (
        math.factorial(letras - 2 * cabos) * (2 ** cabos) * math.factorial(cabos)
    )

def total_combinacoes():
    rotores = permutacao_rotores()
    posicoes = posicoes_iniciais()
    plugboard = combinacoes_plugboard()

    total = rotores * posicoes * plugboard

    print("=== Cálculo do Total de Combinações da Enigma ===")
    print(f"Ordem dos rotores: {rotores}")
    print(f"Posições iniciais dos rotores: {posicoes}")
    print(f"Combinações do plugboard: {plugboard}")
    print(f"Total de combinações possíveis: {total}")

if __name__ == "__main__":
    total_combinacoes()