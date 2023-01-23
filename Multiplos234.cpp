#include <iostream>
#include <vector>

using namespace std;

int main(){

  int entrada;
  cin >> entrada;

  int multiplosDe2 = 0;
  int multiplosDe3 = 0;
  int multiplosDe4 = 0;



  for (int i = 0; i < entrada; i++) {
    int num;
    cin >> num;

    if (num % 2 == 0) {
      multiplosDe2++;
    }
    if (num % 3 == 0) {
      multiplosDe3++;
    }
    if (num % 4 == 0) {
      multiplosDe4++;
    }

  }

  cout << multiplosDe2 << endl;
  cout << multiplosDe3 << endl;
  cout << multiplosDe4 << endl;
  return 0;
}
