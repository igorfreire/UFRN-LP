#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){

    char nome[50];
    int i;
    cout << "Maisculo p/ Minusculo\n";
    cout << "Digite o nome completo: ";
    gets(nome);
    for(i = 0; i < strlen(nome); i++){
        nome[i] = nome[i]+32;
    }
    puts(nome);
    return 0;
}
