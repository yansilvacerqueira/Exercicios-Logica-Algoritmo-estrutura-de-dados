#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

  int entrada, x = 0, y = 0;
  cin >> entrada;
  int v[entrada];

  for (int i = 0; i < entrada; i++) {
    cin >> v[i];
  }
  int k;
  cin >> k;
  for (int i = 0; i < entrada; i++) {
    if (v[i] + v[i + 1] == k) {
      x = v[i];
      y = v[i + 1];
    }
  }

  cout << x << " " << y << endl;

  return 0;
}


// solucao 2

// solucao 3