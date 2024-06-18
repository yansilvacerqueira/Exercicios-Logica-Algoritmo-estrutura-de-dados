#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

  int entrada, P;
  cin >> entrada >> P;
  char simbolo;
  cin >> simbolo;
  int Q;
  cin >> Q;

  int soma;
  if (simbolo == '+') {
    soma = P + Q;
    if (soma > entrada) {
      cout << "OVERFLOW" << endl;
    } else {
      cout << "OK" << endl;
    }
  }
    if (simbolo == '*') {
    soma = P * Q;
    if (soma > entrada) {
      cout << "OVERFLOW" << endl;
    } else {
      cout << "OK" << endl;
    }
  }

  return 0;
}