#include <iostream>
#include <vector>

using namespace std;

int main(){

  int entrada;

  vector <int> numPar;
  vector <int> numImpar;
  for (int i = 1; i <= 10; i++) {
    cin >> entrada;
    if (entrada % 2 == 0) {
      numPar.push_back(entrada);
    } else {
      numImpar.push_back(entrada);
    }
  }
  for (int i = 0; i < numPar.size(); i++) {
    cout << numPar[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < numImpar.size(); i++) {
    cout << numImpar[i] << " ";
  }
	

  return 0;
}
