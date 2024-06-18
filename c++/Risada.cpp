#include <iostream>

using namespace std;

int main() {
    // Declarando as variáveis
    string ris, inv = "", new_s = "";

    cin >> ris;

    // Percorrendo toda a risada de entrada
    for(int i = 0; i < ris.size(); i++ ) {
        int c = ris[i];
        // Caso o caracter atual seja uma vogal, acrescenta-o na nova string
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            new_s += c;
        }
    }

    // Invertendo a string de vogais
    for(int i = new_s.size() - 1; i >= 0; i--) 
      inv += new_s[i];

    // Percorrendo toda a string de vogais
    for(int i = 0; i < inv.size(); i++) {
        // Caso o caractere atual seja diferente do seu inverso, a risada não é a das mais engraçadas
        if(inv[i] != new_s[i]) {
            cout << 'N';
            return 0;
        }
    }

    cout << 'S';
}

//my solution
#include <iostream>
#include <string>

using namespace std;

int main(){
  string entrada;
	cin >> entrada;
	
  string palavraParaVerificar = "";
	
  bool palavraEngracada = false;
  	
	for (int i = 1, j = entrada.size() -1; i <= entrada.size(), j >= 0; i++, j--) {
		if (entrada[i] == 'a' || entrada[i] == 'e' || entrada[i] == 'i' || entrada[i] == 'o' || entrada[i] == 'u') {
      palavraParaVerificar += entrada[i];
    }
	}
  for (int i = 0, j = palavraParaVerificar.size() -1; i < palavraParaVerificar.size(), j >= 0; i++, j--) {
    if (palavraParaVerificar[i] != palavraParaVerificar[j]) {
      cout << "N" << endl;
      break;
    }
    cout << "S" << endl;
    break;
  }

  return 0;
}