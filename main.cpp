#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista[10][20] = {0};
    char nome[20] = {0};
    for (size_t i = 0; i < 10; i++) cin >> lista[i];
    cout<< endl;
    nome[20];
    for (int j=0; j<20; j++) nome[j];
    cin >> nome;
    int posizione = cerca(lista,nome);
    if (posizione >= 0) {
        cout<<  posizione << endl;
    } else {
        cout << "non presente" << endl;
    }
}
