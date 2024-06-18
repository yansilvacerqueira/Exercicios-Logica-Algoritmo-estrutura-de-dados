#include <iostream>

using namespace std;

int fatorial (int n) {
    if (n < 2){
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int N;
    cin >> N;
    

    cout << fatorial(N) << endl;
}