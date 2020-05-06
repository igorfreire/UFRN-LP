#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int tamanho(char v[]);

int main(void){


        char vetor[50];
        cout << "digite a frase: " ;
        gets(vetor);
        cout << tamanho(vetor) << endl;
        return 0;

}
int tamanho(char v[]){
     int n;
    for(n=0; v[n] != '\0'; n++);
    return n;

}

