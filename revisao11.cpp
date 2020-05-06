#include <iostream>
#include <cstdio>

using namespace std;

struct livro
{
    int codigo;
    char titulo[50];
    int paginas;
};
int main(void){

         livro biblioteca[10];
         for(int i=0;i<10;i++){
             biblioteca[i].codigo = i;
             cout << "\nDados do livro  " << i << endl;
             cout << "NOme: ";
             gets(biblioteca[i].titulo);
             cout << "\nPaginas do livro: ";
             cin >> biblioteca[i].paginas;

        }
        for(int i=0;i<10;i++){
             cout << "Dados do livro  " << i << endl;
             puts(biblioteca[i].titulo);
             cout << "\n" << biblioteca[i].paginas;
             cout << "-----------------" << endl;

        }


//precisa consertar pois está pulando uma informação a cada iteração..

return 0;
}
