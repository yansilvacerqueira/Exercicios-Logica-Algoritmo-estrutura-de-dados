#include <iostream>
#include <vector>

using namespace std;


int main () {
    
    int x;
    int vetor[10];
    vector <int> vetor2;
    bool flag = false;

    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (x == vetor[i]) {
            flag = true;
            vetor2.push_back(i);
        }
    }

    if (!vetor2.empty()) {
        cout << vetor2.size() << endl;
        for (int i = 0; i < vetor2.size(); i++) {
            cout << vetor2[i] << " ";
        }
    } else {
        cout << "Mia x";
    }
    return 0;
}