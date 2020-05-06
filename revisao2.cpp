#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{

        char nome[50];
        int i, final;
        cout << "Digite seu nome completo: ";
        gets(nome);
        //puts(nome);
        cout << nome[0] << "." << " ";
        final = strlen(nome);
        for(i=1; i < final;i++){
             if (nome[i] == " ") {
                   cout << nome[i+1] << "." << " " ;
            }
        }

return 0;
}
