#include <iostream>

using namespace std;

int main()
{
    int n,res;
    cout << "Digite o numero inteiro: " << endl;
    cin >> n;
    res = (n % 2);
    if (res == 0)
    {
        cout << "O numero digitado é PAR!";
    }
    else
    {
        cout << "O numero digitado é IMPAR";
    }

}
