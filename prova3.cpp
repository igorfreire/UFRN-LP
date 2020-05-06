#include <iostream>
using namespace std;
int main(){

for(int i=0; i<6;i++){
    if(i==0)
    {
        cout << "zero" << endl;
        continue;
    }
    if(i==4)
    {
        cout << "quatro" << endl;
        break;
    }
    cout << "valor de i:" << i << endl;

}
return 0;
}

