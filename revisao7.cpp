#include <iostream>
using namespace std;

void imprimir(int v[], int tam);

int main(void){

        int vetor1[]={1,2,3};
        int vetor2[]={5,6,7,8,10};

         imprimir(vetor1,3);
         imprimir(vetor2,5);

         return 0;
}

void imprimir(int v[], int tam) {

    for(int n=0; n < tam; n++){
        cout << v[n] << "";
        cout << "\n";
    }


}
