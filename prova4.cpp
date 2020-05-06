#include <iostream>
using namespace std;
int main(){

    int x=1, nant, n=1,i;
    float soma;
    cout << "digite n:";
    cin >> nant;
    for(x=0;x<nant;x++){
        soma += (x / n);
        x += 2;
        n++;

    }
    cout << "soma:" << " " << soma;
    return 0;
}

