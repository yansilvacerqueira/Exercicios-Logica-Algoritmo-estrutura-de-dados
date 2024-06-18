#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

  int A, B, menor, maior;
  cin >> A >> B;

  if (A > B) {
    maior = A;
    menor = B;
  }

  if (B > A) {
    maior = B;
    menor = A;
  }

  while (menor <= maior) {
    cout << menor << " ";
    menor++;
  }
  return 0;
}