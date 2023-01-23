#include <iostream>
#include <stack>

using namespace std;


int hanoi (int discos, stack<int> origem, stack<int> destino, stack<int> aux) {
    if (discos > 0) {
        hanoi (discos - 1, origem, aux, destino);
        
        destino.push(origem.top());
        origem.pop();
        hanoi(discos - 1, aux , destino, origem);
    }
}

int main () {
    int discos, teste = 1, movimentos = 0;
    cin >> discos;

    stack <int> origem;
    stack <int> destino;
    stack <int> aux;

    for (int i = 0; i < discos; i++) {
        origem.push(discos);
    }

    while (discos != 0) {
        
        movimentos = 0;
        cout << "Teste " << teste++ << endl;
        hanoi(origem.size(), origem, destino, aux);
        movimentos++;

        cin >> discos;
    }
    cout << movimentos << endl;

    return 0;
}