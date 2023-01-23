#include <iostream>
#include <vector>

using namespace std;


int main () {
    
    int vector[10];

    for (int i = 0; i < 10; i++) {
        cin >> vector[i];
    }
    for (int i = 9; i >= 0 ; i--) {
        cout << vector[i] << endl;
    }
    return 0;
}