#include <iostream>

using namespace std;

int main() {
	int v, quantidade = 0;
	cin >> v;
	int moedas[v];
	
	for (int i=0; i<=v; i++) {
		if (v >= moedas[i]) {
			quantidade += v/moedas[i];
			v = v%moedas[i];
		}
	}
	cout << quantidade;
}