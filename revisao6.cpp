#include <iostream>
#include <math.h>
using namespace std;

void resolve_equacao(float, float, float );

int main(void){

       float a, b, c;

        cout << "Digite os termos da equacao: ";
        cin >> a >> b >> c;
        resolve_equacao(a,b,c);

        return 0;
}

void resolve_equacao(float a, float b, float c){
       float delta, x1, x2;

       if( a!=0){
            delta = pow(b,2) - (4*a*c);
            cout << "DELTA = " << delta << endl;
            if(delta >= 0){
               x1 = (-b + sqrt(delta)) / (2*a);
               x2 = (-b - sqrt(delta)) / (2*a);
               cout << "1 Raiz: " << x1 << "\n2 Raiz: " << x2 << endl;
            }

       }
} //fim funcao
