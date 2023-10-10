#include <iostream>
#include <vector>

using namespace std;

vector<int> somaValores(int array[], int somaAlvo){
    
    vector<int> resultado;

    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 8; j++){
            if( array[i] + array[j] == somaAlvo){
                resultado.push_back(array[i]);
                resultado.push_back(array[j]);
                return resultado;
            }
        }
    }

    return resultado;
}

int main(void){

    int array[] = {3, 5, -4, 8, 11, 1, -1, 6};
    int somaAlvo = 10;

    vector<int> resultado = somaValores(array, somaAlvo);

    for (int i : resultado){
        cout << i << " ";
    }

    return 0;
}
