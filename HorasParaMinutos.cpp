#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

  int horas, minutos;
  cin >> horas >> minutos;

  int calcHoras = horas * 60;

  cout << calcHoras + minutos << endl;


  return 0;
}