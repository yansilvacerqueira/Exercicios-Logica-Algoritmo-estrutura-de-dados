#include <iostream>
using namespace std;

void swap (int& a, int& b) {
    int c  = a;
    a = b;
    b = c;
}

int main (){

    int n;
    cin >> n;

    int array[n];
    
    for (int i = 0; i < n; i ++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }


    for (int i = 0; i < n; i ++) {
        cout << array[i];
    }

    // complexidade de tempo: o(n**2);
}