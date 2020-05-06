#include <iostream>
using namespace std;

void troca(int& x, int& y);

int main(void){

    int a=5, b=3;
        cout <<"\na= " << a << " b= " << b << endl;
        troca(a,b);
        cout <<"\na= " << a << " b= " << b << endl;
        return 0;


}

void troca(int& x, int& y){

        int temp = x;
        x = y;
        y = temp;


}
