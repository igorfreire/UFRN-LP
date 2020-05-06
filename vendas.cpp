#include <iostream>
using namespace std;

struct Venda {
    int pecas;
    float preco;

};
void listaVenda(Venda, Venda);

int main(void){

    Venda A, B;
    cout << "Venda A\n";
    cout << "Numero Pecas: ";
    cin >> A.pecas;
    cout << "Preco: ";
    cin >> A.preco;
    cout << "Venda B\n";
    cout << "Numero Pecas: ";
    cin >> B.pecas;
    cout << "Preco: ";
    cin >> B.preco;

    listaVenda(A, B);
    return 0;

}
void listaVenda(Venda x, Venda y){

    cout << "Venda TOTAL: \n";
    cout << "Pecas: " << (x.pecas+y.pecas) << endl;
    cout << "Preco Total: " << ((x.pecas*x.preco)+(y.pecas*y.preco)) << endl;

}
