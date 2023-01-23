#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
    int n;
    cin >> n;

    int divisores[n];

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

}