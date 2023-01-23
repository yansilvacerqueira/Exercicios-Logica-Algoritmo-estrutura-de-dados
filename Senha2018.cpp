#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

    int entrada;
    cin >> entrada;

    int count = 0;
    while (entrada != 2018) {
        if (entrada == 2018) {
            cout << count << endl;
            break;
        } else {
            count++;
        }
        cin >> entrada;
    }

    cout << count << endl;
  return 0;
}