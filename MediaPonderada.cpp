#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

    int A, B;
    cin >> A >> B;

    int pesoA = 4;
    int pesoB = 6;

    int somaDosPesos = pesoA + pesoB;

    int calc = ((A * pesoA) + (B * pesoB)) / somaDosPesos;

    cout << calc << endl;
    return 0;
}