#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

    int nota1, nota2;
    cin >> nota1 >> nota2;

    int peso1 = 2;
    int peso2 = 3;
    
    int pesoTotal = peso1 + peso2; 

    int calc = ((nota1 * peso1) + (nota2 * peso2)) / pesoTotal;
    
  return 0;
}