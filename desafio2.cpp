#include <iostream>
#include <vector>

using namespace std;

bool ehSequencia(vector<int>& matriz1, vector<int>& matriz2) {
    vector<int> array;

    // Variável para rastrear a posição em matriz1
    int posicaoMatriz1 = 0;

    // Aqui, vamos iterar e verificar se matriz2 é uma subsequência de matriz1
    for (int elemento : matriz2) {
        bool encontrado = false;
        
        // Começar a busca a partir da posição atual em matriz1
        for (int i = posicaoMatriz1; i < matriz1.size(); i++) {
            if (elemento == matriz1[i]) {
                array.push_back(elemento);
                posicaoMatriz1 = i + 1; // Atualizar a posição em matriz1
                encontrado = true;
                break;
            }
        }

        // Se o elemento não for encontrado em matriz1, matriz2 não é uma subsequência
        if (!encontrado) {
            return false;
        }
    }

    // Imprimir o vetor
    cout << "Vetor: ";
    for (int valor : array) {
        cout << valor << " ";
    }
    cout << endl;

    return true;
}

int main() {
    vector<int> matriz1 = {1, 2, 3, 4, 5};
    vector<int> matriz2 = {1, 4, 5};

    bool resultado = ehSequencia(matriz1, matriz2);

    if (resultado) {
        cout << "matriz2 é uma subsequência de matriz1." << endl;
    } else {
        cout << "matriz2 não é uma subsequência de matriz1." << endl;
    }

    return 0;
}
