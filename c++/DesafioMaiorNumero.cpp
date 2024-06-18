#include <iostream>

using namespace std;

int main(){
  
  int n;
	cin >> n;
	
  int r = 0;
  
  while (n != 0 ) {
    int aux = n;
    
    if (aux > r) {
      r = aux;
    }
    
    aux = 0;
    
    cin >> n;
  }
  cout << r << endl;


  return 0;
}
