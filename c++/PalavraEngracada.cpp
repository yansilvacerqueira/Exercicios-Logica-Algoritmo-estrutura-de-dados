#include <iostream>
#include <string>

using namespace std;

int main(){
  string entrada;
	cin >> entrada;
	
  string palavraParaVerificar = "";
	
  bool palavraEngracada = false;
  	
	for (int i = 0, j = entrada.size() -1; i < entrada.size(), j >= 0; i++, j--) {
	    if (entrada[i] == 'a' || entrada[i] == 'e' || entrada[i] == 'i' || entrada[i] == 'o' || entrada[i] == 'u') {
            palavraParaVerificar += entrada[i];
        }
	}
  for (int i = 0, j = palavraParaVerificar.size() -1; i < palavraParaVerificar.size(), j >= 0; i++, j--) {
    if (palavraParaVerificar[i] == palavraParaVerificar[j]) {
      palavraEngracada = true;
    }
  }

  if (palavraEngracada) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }
  return 0;
}
