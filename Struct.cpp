#include <iostream>

using namespace std;

struct Aluno {
   
    int mediaAluno,
    codigo,
    idade,
    nota;

    int getMedia_Aluno () {
        return this->mediaAluno = mediaAluno;
    }
    void setMediaAluno (int mediaAluno) {
        this->mediaAluno = mediaAluno;
    }
};


int main () {
    
    cout << "Bota a nota do aluno ai seu piroca" << endl;
    int media;
    cin >> media;

    Aluno aluno;
    aluno.setMediaAluno(media);
    cout << "a nota do aluno: " << aluno.getMedia_Aluno() << endl;

    return 0;
}