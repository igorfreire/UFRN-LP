#include <iostream>
#include <stdio.h>
#include <cstring>


using namespace std;

void mid (char origem[], char dest[], int inicio, int n);

int main(void)
{
    char origem[50], destino[50];
    int i, inicio, n;
    cout << "Digite a cadeia inicial: " << endl;
    gets(origem);
    //serve para pegar a cadeia de caracteres
    cout << "Digite a posicao: " << endl;
    cin >> inicio;
    n = strlen(origem);
    //aqui precisamos saber ate onde vai o final
    mid(origem,destino,inicio, n);
    //chama a funcao para retornar a cadeia de caracteres de destino
    cout << destino;
    //aqui também pode ser o puts(destino);
    return 0;

}
//abaixo a funcao que ira calcular o solicitado na questao
void mid (char origem[], char dest[], int inicio, int n){
     int i,j=0;
    for(i=inicio; i <= n; i++){
        dest[j] = origem[i];
        cout << dest[j];
    }

}
