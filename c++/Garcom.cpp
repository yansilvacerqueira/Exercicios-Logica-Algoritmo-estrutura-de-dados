#include <iostream>
using namespace std;

int main (){
    int entrada;
    cin >> entrada;

    int latas, copos;

    int coposQuebrados = 0;
    for (int i = 0; i < entrada; i++) {
        cin >> latas >> copos;

        if (copos > latas) {
            coposQuebrados += copos;
        }
    }

    cout << coposQuebrados;
}