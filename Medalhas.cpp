#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {
    
    int jogador1, jogador2, jogador3;
    cin >> jogador1 >> jogador2 >> jogador3;

    if (jogador1 > jogador2 && jogador2 > jogador3) {
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
    } else if (jogador2 > jogador1 && jogador1 > jogador3) {
        cout << 2 << endl;
        cout << 1 << endl;
        cout << 3 << endl;
    } else {
        cout << 3 << endl;
        cout << 2 << endl;
        cout << 1 << endl;
    }
 
    return 0;
}