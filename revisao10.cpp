#include <iostream>
using namespace std;

struct Estudante
{
    char Nome[50];
    char Curso[30];
    int id;
    char sexo;
};
int main(void){

           Estudante aluno1;

            cout << "Digite o Nome do aluno: ";
            cin >> aluno1.Nome;
            cout << "\nDigite o Curso do aluno: ";
            cin >> aluno1.Curso;
            cout << "\nIdade: ";
            cin >> aluno1.id;
            cout << "\nSexo: ";
            cin >> aluno1.sexo;
            cout << "\n\n-------------------------------------" << endl;
            cout << aluno1.Curso << endl;
            cout << aluno1.Nome << endl;
            cout << aluno1.sexo << endl;
            cout << aluno1.id << endl;

            return 0;

}
