#include <iostream>

using namespace std;

int main(){
    int entrada;
	cin >> entrada;
	
	bool A = false, B = false;
	
	for (int i = 0; i < entrada; i++) {
		int estados;
		cin >> estados;
		
		if (estados == 1) {
			A = !A;
		}
		if (estados == 2) {
			A = !A;
			B =  !B;
		}
	}
	
	if (A) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	
	if (B) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
    return 0;
}
