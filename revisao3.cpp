#include <iostream>
#include <math.h>
using namespace std;


//Criando o prototipo das funcoes que serao utilizadas no decorrer do programa
int somar(int x, int y);
int subtrair(int x, int y);
int multip(int x, int y);
float divid(float x, float y);


//Programa Inicial
int main(){

       int a, b,opcao;
       float res;
       cout << "Calculadora Simples, Funcoes!";
       cout << "\n-----------------------------";
       cout << "\nDigite o 1 numero: ";
       cin >> a;
       cout << "\nDigite o 2 numero: ";
       cin >> b;
       cout << "\nOpcoes: ";
       cout << "\n\n1.SOMAR";
       cout << "\n2.SUBTRAIR";
       cout << "\n3.MULTIPLICAR";
       cout << "\n4.DIVIDIR";
       cout << "\n5.POTENCIA\n";
       cin >> opcao;
       switch(opcao)
       {
                   case 1:
                        res = somar(a,b);
                        cout << "\nResultado:" << res << endl;
                        break;
                   case 2:
                        res = subtrair(a,b);
                        cout << "\nResultado:" << res << endl;
                        break;
                    case 3:
                        res = multip(a,b);
                        cout << "\nResultado:" << res << endl;
                        break;
                    case 4:
                        res = divid(a,b);
                        cout << "\nResultado:" << res << endl;
                        break;
                    case 5:
                        //para a potencia utilizamos a funcao pow(), e eh necessario incluir a biblioteca math.h
                        //do mesmo jeito se quiser utilizar a raiz quadrada, funcao sqrt()
                        res = pow(a,b);
                        cout << "\nResultado:" << res << endl;
                        break;
                    default:
                         cout << "Opcao Invalida!";
       }
       return 0;

}
//fim do programa principal, e inicio das funcoes.
//para fazer uma funcao e necessario o tipo de retorno da funcao, logo apos o nome da funcao, e os parametros necessarios.
//Lembrando que podem ser criadas funcoes, sem necessidade de tais parametros.

int somar(int x, int y){
    return x+y;
}
int subtrair(int x, int y){
     return x-y;
}
int multip(int x, int y){
      return x*y;
}
float divid(float x, float y){
     return x/y;
}
