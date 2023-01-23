#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {
    
    int x;
    int vetor[10];
    bool flag = false;

    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (x == vetor[i]) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "SIM";
    } else {
        cout << "NAO";
    }
    return 0;
}