#include <iostream>
#include <vector>

using namespace std;

bool prim (int entrada) {
  int divisores = 0;
	
	for (int i = 1; i <= entrada; i++){
    if ( entrada % i == 0){
      divisores += 1;
    }
	}
	if (divisores == 2){
    return true;
	} else { 
    return false;
	}
}

int main(){

  int entrada;
  cin >> entrada;

  if (prim(entrada)) {
    cout << "S";
  } else {
    cout << "N";
  }
  return 0;
}
