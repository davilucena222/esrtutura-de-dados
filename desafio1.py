def somaAlvo(arrayNaoVazio, somaAlvo):

    valores = []

    for elemento in arrayNaoVazio:
        for elemento2 in arrayNaoVazio:

            if elemento != elemento2:
                soma = elemento + elemento2
                if soma == somaAlvo:
                    valores.append([elemento, elemento2])
                    return valores

    return valores



arrayNaoVazio = [4, -2, 6, 7, 8, 10]

valorAlvo = 10

print(somaAlvo(arrayNaoVazio, valorAlvo))
