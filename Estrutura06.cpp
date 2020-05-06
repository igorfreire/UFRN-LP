#include <iostream>
#include <cstring>
using namespace std;

struct contato{
    char nome[50];
    char numero[20];
};

contato agenda[1000];
int contador = 0;

void cadastrar();
void listar();
void procurar ();
void imprimirmenu();

int main()
{
    int opcao;
    do {
        imprimirmenu();

        cin >> opcao;
        cout << "opcao desejada: " << opcao << endl;
        switch (opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                procurar();
                break;
            case 0:
                return 0;
            default :
                cout << "opcao invalida" << endl;
        }
    } while (opcao != 0);

    return 0;
}

void cadastrar()
{
    contato contatoAux;

    cout << "Funcao de cadastro" << endl;
    cout << "Digite o nome do contato: ";
    cin >> contatoAux.nome;
    cout << "Digite o telefone do contato:";
    cin >> contatoAux.numero;

    agenda[contador] = contatoAux;
    contador++;
}

void listar()
{
    cout << "Funcao de listagem" << endl;
    cout << "Sua agenda tem " << contador << " contatos" << endl;
    cout << "=============================" << endl;
    for (int i = 0; i < contador; i++) {
        cout << "Nome: " << agenda[i].nome << endl;
        cout << "Telefone: " << agenda[i].numero << endl;
        cout << "=============================" << endl;
    }
}

void procurar ()
{
    char nomeAProcurar[50];
    cout << "Funcao de procura" << endl;
    cout << "Digite o nome a procurar:";
    cin >> nomeAProcurar;
    for (int i = 0 ; i< contador; i++) {
        if (strcmp(nomeAProcurar, agenda[i].nome) == 0) {
            cout << "Achei" << endl;
            cout << "O elemento esta na posicao " << i << endl;
            cout << "nome: "<< agenda[i].nome << endl;
            cout << "numero: " << agenda[i].numero << endl;
            break;
        }
    }

}

void alterar()
{
    int posicao;
    cout << "Digite a posicao a ser alterada:";
    cin >> posicao;

    cout << "Digite o novo nome: ";
    cin >> agenda[posicao].nome;

    agenda[posicao].numero;

}
void imprimirmenu()
{
    cout << "Digite a opcao desejada" << endl;
    cout << " 1- cadastro" << endl;
    cout << " 2- listagem" << endl;
    cout << " 3- procurar" << endl;
    cout << " 0- Sair" << endl;
}
