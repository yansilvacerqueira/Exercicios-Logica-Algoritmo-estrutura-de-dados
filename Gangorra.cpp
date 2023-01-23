#include <iostream>

using namespace std;

int main() {
	int P1, C1, P2, C2;
	cin >> P1 >> C1 >> P2 >> C2;

    int pessoa1 = P1 * C1;
    int pessoa2 = P2 * C2;

    if (pessoa1 == pessoa2) {
        cout << 0;
    } else if (pessoa1 > pessoa2) {
        cout << -1;
    } else {
        cout << 1;
    }
	
    
   
}