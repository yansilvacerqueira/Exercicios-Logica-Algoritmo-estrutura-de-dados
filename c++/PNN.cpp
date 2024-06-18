#include <iostream>

using namespace std;

int main() {
	int entrada;
	cin >> entrada;
	
    if (entrada < 0) {
        cout << "negativo" << endl;
    } else if ( entrada > 0) {
        cout << "positivo" << endl;
    } else {
        cout << "nulo" << endl;
    }
}