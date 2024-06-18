#include <iostream>
using namespace std;

struct{
  int arrumar = 0;
  int trocar = 0;
} Postes;

int main() {
  int entrada;
  cin >> entrada;

  int v[entrada];


  
  for (int i = 0; i < entrada; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < entrada; i++) {
    if (v[i] < 50) {
      Postes.trocar++;
    }
    if (v[i] >= 50 && v[i] < 85) {
      Postes.arrumar++;
    }
  }
  cout << Postes.trocar << " " << Postes.arrumar << endl;
  return 0;
}