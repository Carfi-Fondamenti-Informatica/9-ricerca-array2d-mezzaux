#include <iostream>
#include "lib.h"
using namespace std;
int cerca(char a[10][20], char nome[]);

int main() {
    char lista[10][20] = {0};
    char nome[20] = {0};


    cout << "inserisci i 10 nomi (massimo 20 caratteri): " << endl;
    for (size_t i = 0; i < 10; i++) cin >> lista[i];

    cout << "inserisci nome (massimo 20 caratteri) da cercare: " << endl;
    nome[20];
    for (int j=0; j<20; j++) nome[j];
    cin >> nome;


    int posizione = cerca(lista,nome);
    if (posizione >= 0) {
        cout << "presente in posizione: "<<  posizione << endl;
    } else {
        cout << "non presente" << endl;
    }


}

    return 0;
}
