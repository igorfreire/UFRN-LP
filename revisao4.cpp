#include <iostream>
using namespace std;

//declaracao de funcoes(prototipos)
int le_numero(void);
int max(int n1, int n2);

int main(void){

            int x, y;
            //chamada de funcoes
            x = le_numero();
            y = le_numero();
            cout << "O maximo eh: " << max(x,y) << endl;
            return 0;



}
//definicao das funcoes
int le_numero(void){

    int numero;
    cout << "Digite um numero: " << endl;
    cin >> numero;
    return numero;

}

int max(int n1, int n2){
        if(n1 > n2)
            return n1;
        else
            return n2;
}
