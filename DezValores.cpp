#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

    int entrada;
    cin >> entrada;

    int verificao = entrada + 10;

    for (int i = entrada + 1; i <= verificao; i++) {
        cout << i << " ";
    }

  return 0;
}