matriz1 = [1, 2, 3, 4, 5]

matriz2 = [1, 4, 5] 

array = []

def eh_sequencia(matriz1, matriz2):
    # aqui iremos iterar e verificar se é a matriz2 é subsequencia da matriz1
    for elemento in matriz2:
        if elemento in matriz1:
            array.append(elemento)

    print(array)

    if(sorted(array) == matriz2):
        return True
    
    return False

print(eh_sequencia(matriz1, matriz2))