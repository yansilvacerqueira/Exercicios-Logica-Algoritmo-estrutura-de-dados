#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {
    
    int N;
    cin >> N;
    int vet[N];

    int soma = 0;

    for (int i = 0; i < N; i++) {
        cin >> vet[i];
    }

    for (int i = 0; i < N; i++) {
        soma += vet[i];
    }

    cout << soma;
    return 0;
}