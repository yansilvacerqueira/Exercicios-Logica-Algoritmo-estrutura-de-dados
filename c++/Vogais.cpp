#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    string nome;
    cin >> nome;

    string x = "aeiou";

    string vogaisNaString;
    string consoantesNaString;


    for (int i = 0; i < nome.size(); i++) {
        if (nome[i] == 'a' or nome[i] == 'e' or nome[i] == 'i' or nome[i] == 'o' or nome[i] == 'u') {  
            vogaisNaString += nome[i];
        } else {
            consoantesNaString += nome[i];
        }
    }

    cout << "Vogais: " << vogaisNaString << endl;
    cout << "Consoantes: " << consoantesNaString << endl;
    return 0;   
}