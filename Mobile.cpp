#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

    int A,B,C,D;
    cin >> A >> B >> C;

    if (B == C) {
        D = B + C;
    }

    if (A == D * 2) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }
  return 0;
}