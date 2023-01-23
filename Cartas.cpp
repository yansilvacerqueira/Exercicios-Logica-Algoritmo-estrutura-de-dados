#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

  int A, B, C;
  cin >> A >> B >> C;


  if (A != B && A == C) {
    cout << B << endl;
  } else if (A == B && A != C) {
    cout << C << endl;
  } else {
    cout << A << endl;
  }


  return 0;
}