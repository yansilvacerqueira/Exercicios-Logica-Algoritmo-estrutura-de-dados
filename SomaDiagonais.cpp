#include <iostream>
using namespace std;



int main() {
  
  int matriz[3][3];
  int diagonalPrincipal = 0;
  int diagonalSecundaria = 0;
  int nums;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> nums;
      if (i == j) {
        diagonalPrincipal += nums;
      }
      if (i + j == 3 - 1) {
        diagonalSecundaria += nums;
      }
    }
  }
    cout << "Diagonal principal: " << diagonalPrincipal << endl;
    cout << "Diagonal secundaria: "  << diagonalSecundaria << endl;

  return 0;
}