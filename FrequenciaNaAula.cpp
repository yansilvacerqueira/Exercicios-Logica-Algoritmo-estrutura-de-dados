#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    set <int> alunos;
    cin >> n;
    
    for (int i=0;i<n;i++){
        int aluno;
        cin >> aluno;
        alunos.insert(aluno);
    }
    cout << alunos.size();
}