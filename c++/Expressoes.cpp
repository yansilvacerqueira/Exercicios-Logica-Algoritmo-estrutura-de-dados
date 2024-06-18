#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main () {

    int entrada;
    cin >> entrada;
    string simbolos;

    while (entrada--) {
        cin >> simbolos;

        stack <char> pilha;
        bool verificao = true;

        for (char simbolo: simbolos) {
            if (simbolo == '(' || simbolo == '{' || simbolo == '[') {
                pilha.push(simbolo);
            } else {
                
                if (pilha.size() > 0  && pilha.top() == '(' && simbolo == ')') {
                    pilha.pop();
                } else if (pilha.size() > 0  && pilha.top() == '[' && simbolo == ']'){
                    pilha.pop();
                } else if (pilha.size() > 0  && pilha.top() == '{' && simbolo == '}'){
                    pilha.pop();
                } else {
                    verificao = false;
                    break;
                }
            }
        }
        if (pilha.size() > 0) {
            verificao = false;
        }

        if (verificao) {
            cout << 'S' << endl;
        } else {
            cout << 'N' << endl;
        }
    }


    return 0;
}