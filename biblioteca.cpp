#include <iostream>
using namespace std;

struct livro {
    int id;
    char titulo[50];
    int numero_de_paginas;

};
struct estante {
    livro prateleiras[5][10];
};
struct biblioteca {
    estante estantes[10];
};

int main(void){
   biblioteca zilamamede;
   int i;
   for(i=0;i<10;i++){
      livro l;
      l.id = i;
      cout << "Dados do livro ID: " << i << endl;
      cout << " - Nome: ";
      cin >> l.titulo;
      cout << " - Numero Paginas: ";
      cin >> l.numero_de_paginas;
      //zilamamede.estantes[0].prateleiras[0][i] = 1;

   }
   for(i=0;i<10;i++){
   livro l;
  l = zilamamede.estantes[0].prateleiras[0].[i];
   cout << "Dados do Livro ID: " << i;
   cout << "nome: " << l.titulo;
   cout << "Pagina: " << l.numero_de_paginas;
   cout << "\n============================\n";
   }
return 0;

}
