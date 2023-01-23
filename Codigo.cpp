#include <iostream>
#include <string>

using namespace std;

int main(){
    // Seu código vai aqui
	string entrada;
	cin >> entrada;
	
	int count = 0;
	
	string r = " ";
	for ( int i = 0; i < entrada.size() - 2; i += 3) {
		r += entrada[i];  
      r += entrada[i + 1];  
      r += entrada[i + 2];
		
		if ( r == "100") {
			count++;
		}
      
      cout << r << endl;
      r = " ";
	}
	cout << endl;
	cout << count << endl;
    return 0;
}
