#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {
    
    int N;
    cin >> N;
    int num;

    int somaLinha[N] = {0};
    int somaColuna[N] = {0};
    int diagonalPrincipal = 0;
    int diagonalSecundaria = 0;

    bool verificacao = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> num;

            somaLinha[i] += num;
            somaColuna[j] += num;

            if (i == j) {
                diagonalPrincipal += num;
            }

            if ( i + j == N -1) {
                diagonalSecundaria += num;
            }
        }
    }
    if (diagonalPrincipal != diagonalSecundaria) {
        verificacao = false;
    }

    for (int i = 0; i < N; i++) {
        if (diagonalPrincipal != somaLinha[i] || diagonalPrincipal != somaColuna[i]) {
            verificacao = false;
        }
    }

    if (verificacao){
        cout << diagonalPrincipal;
    } else {
        cout << -1;
    }


    return 0;
}