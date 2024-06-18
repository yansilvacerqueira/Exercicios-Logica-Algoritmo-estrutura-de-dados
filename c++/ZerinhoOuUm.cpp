#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
    int Alice, Beto, Clara;
    cin >> Alice >> Beto >> Clara;

    if (Alice != Beto && Alice != Clara) {
        cout << 'A';
    }
    if (Beto != Alice && Beto != Clara) {
        cout << 'B';
    }
    if (Clara != Beto && Clara != Alice) {
        cout << 'C';
    }
    if (Alice == Beto && Alice == Clara && Beto == Alice && Beto == Clara && Clara == Beto && Clara == Alice) {
        cout << '*';
    }
}