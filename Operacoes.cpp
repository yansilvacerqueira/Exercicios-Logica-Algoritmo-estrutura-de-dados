#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    char ordem;
    cin >> ordem;

    double A, B;
    cin >> A >> B;

    if (ordem == 'M') {
        cout << fixed << setprecision(2) << A * B << endl;
    } else {
        cout << fixed << setprecision(2) << A / B << endl;
    }
}