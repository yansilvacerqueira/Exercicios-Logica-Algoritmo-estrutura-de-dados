#include <iostream>
using namespace std;

int main() {
int tamanho;
cin >> tamanho;

int tabuleiro[tamanho];

for(int i = 0; i < tamanho; i++){
  cin >> tabuleiro[i];
}


for(int i = 0; i < tamanho; i++){
  
  if(i == 0){
    cout << tabuleiro[i] + tabuleiro[i + 1] << endl;
  }else if(i == tamanho - 1){
    cout << tabuleiro[i] + tabuleiro[i - 1] << endl;
  }else{
    cout << tabuleiro[i] + tabuleiro[i-1] + tabuleiro[i + 1] << endl;
  }

}
  return 0;
}

#include <iostream>

using namespace std;

int main() {
	int n, quantidade, tabuleiro[55];	
	cin >> n;
	
	for (int i=1; i<n+1; i++) {
		cin >> tabuleiro[i];	
	}
	
	tabuleiro[0] = 0;
	tabuleiro[n+1] = 0;
	
	for (int i=1; i<n+1; i++) {
		quantidade = tabuleiro[i-1] + tabuleiro[i] + tabuleiro[i+1];
		cout << quantidade << endl;
	}
}