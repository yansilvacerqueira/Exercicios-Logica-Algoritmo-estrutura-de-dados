#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

  int num;
  int r[3] = {0};
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> num;
      r[j] += num;
    }
  }

  for (int i = 0; i < 3; i++) {
    cout << "Coluna " << i << ": " << r[i] << endl;
  }

  return 0;
}