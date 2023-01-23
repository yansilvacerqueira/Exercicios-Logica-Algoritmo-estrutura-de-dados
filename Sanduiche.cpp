#include <iostream>

using namespace std;

int buscaBinaria (int tamanho, int array[], int value, int A, int B) {
    A = 0;
    B = tamanho - 1;
    
    while (A <= B) {
        if (array[A] + array[B] == value) {
            return 0;
        } else if (array[A] + array[B] < value) {
            A++;
        } else {
            B--;
        }
    }
}