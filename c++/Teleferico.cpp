#include <iostream>
#include <vector>

using namespace std;

int main () {
  int capacidade, alunos;
  cin >> capacidade >> alunos;

  if ( capacidade > alunos + 1) {
    cout << 1;
  } else {
    int calc = alunos / (capacidade -1);
    int resto = alunos % (capacidade - 1);

    if (resto > 0) {
      calc++;
    }
    cout << calc;
  }

  return 0;
}
