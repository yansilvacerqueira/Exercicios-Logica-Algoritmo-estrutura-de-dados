#include <iostream>
using namespace std;

int main (){
    
    int entrada;
    cin >> entrada;

    int x[entrada];

    int soma = 0;
    int aux = 0;
    
    for (int i = 0; i < entrada; i++) {
      cin >> x[i];
    }

    for (int i = 0; i < entrada; i++) {
      if (x[i] == x[i + 1]) {
        soma++;
        if (soma > aux){
          aux = soma;
        }
      } else {
        soma = 0;
      }

    }

    cout << aux + 1<< endl;
}