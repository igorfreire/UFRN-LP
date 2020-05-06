//============================================================================
// Name        : RevEst.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct jogador {
	char nome[500];
	int gols;
	int partidas;
};

void imprimirTodos(jogador time[], int tam);

void ordenarPorGols(jogador time[], int tam);

int main() {
	jogador time[32];

	strcpy(time[0].nome,"Mossoro");
	time[0].gols = 10;
	time[0].partidas = 2;

	strcpy(time[1].nome,"Macaiba");
	time[1].gols = 4;
	time[1].partidas = 10;

	strcpy(time[2].nome,"Joao");
	time[2].gols = 1;
	time[2].partidas = 4;

	strcpy(time[3].nome,"neyjr");
	time[3].gols = 16;
	time[3].partidas = 20;

	strcpy(time[4].nome,"sidney");
	time[4].gols = 0;
	time[4].partidas = 30;

	imprimirTodos(time,5);
	cout << endl;
    ordenarPorGols(time,5);
	imprimirTodos(time,5);
	cout << endl;

	return 0;
}


void ordenarPorGols(jogador time[], int tam){
	for(int i=0;i<tam;i++) {
		for(int j=i+1;j<tam;j++) {
			if(time[i].gols<time[j].gols) {
				jogador temp;
				temp = time[i];
				time[i] = time[j];
				time[j] = temp;
			}
		}
	}

}

void imprimirTodos(jogador time[], int tam) {
	for(int i=0; i<tam;i++) {
		cout <<"Nome:"<<time[i].nome << " gols:"<<time[i].gols<< " partidas:"<<time[i].partidas<<endl;
	}

}
