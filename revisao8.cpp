#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

void max(int, int [][2], int &, int &, int &);

int main(void)
{
  int i,j,n=2,k,lin,col;
  //int A[n][n];
  int A[2][2];

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      cout << "Valor da Posicao: " << i << j << endl;
      cin >> A[i][j];
    }
    cout << endl;
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      cout << A[i][j] <<" ";
    }
    cout << endl;
  }

  max(n,A,k,lin,col);

  cout << "K: " << k << endl;
  cout << "Linha: " << lin << endl;
  cout << "Coluna: " << col << endl;

  return 0;
}

void max(int n, int A[][2], int &k, int &lin, int &col)
{
  int i,j;
  k=0;

  for(i=0; i <n; i++){
    for(j=0; j<n; j++){
      //if(k > A[i][j]){
      if(k <= A[i][j]){
        k = A[i][j];
        lin = i;
        col = j;
      }
    }
  }
}
