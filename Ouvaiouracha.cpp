//============================================================================
// Name        : Ouvaiouracha.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void trim (char nome[]);

int main() {
	char nome[100];
	strcpy(nome,"que         prova          legal!");
	cout << " Antes:" << nome << endl;
	trim(nome);
	cout << "Depois:" << nome << endl;
	return 0;
}

void trim (char nome[]) {
	for (int i = 0; i < strlen(nome); i++) {
		if (nome[i] == ' ' && nome[i+1] == ' ' ) {
			for (int j = i+1; j < strlen(nome); j++) {
				nome[j] = nome[j+1];
			}
			i = i-1;
		}

	}

}
