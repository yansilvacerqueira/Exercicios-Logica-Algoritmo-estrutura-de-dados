#include <iostream>

using namespace std;

bool eh_primo(int x){
	bool flag = false;
    if (x == 2){
        flag = true;
    } else if ( x % 2 != 0 ){
        flag = true;
    } else {
        flag = false;
    }

    return flag;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}

// solucao 2


#include <iostream>

using namespace std;

bool eh_primo(int x){
	int divisores = 0;
	
	for (int i = 1; i <= x; i++){
        if (x%i == 0){
            divisores += 1;
        }
	}
	if (divisores == 2){
        return true;
	}
	else{
        return false;
	}
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}
	else{
		cout << "N" << "\n";
	}
}