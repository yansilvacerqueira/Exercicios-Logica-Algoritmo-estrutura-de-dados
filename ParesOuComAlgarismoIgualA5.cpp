#include <iostream>

using namespace std;

int main(){

  int A, B, C;
  cin >> A >> B >> C;

  int resposta = 0;
  if (A % 2 == 0 || A % 5 == 0) {
    resposta++;
  }
  if (B % 2 == 0 || B % 5 == 0) {
    resposta++;
  }
  if (C % 2 == 0 || C % 5 == 0) {
    resposta++;
  }
  cout << resposta << endl;
  return 0;
}
