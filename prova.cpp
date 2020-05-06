#include <iostream>
using namespace std;
int main(){
        int x = 3;
        int y = 2;
        float z = 10.0;
        cout << x / y << endl;
        cout << x / y / z << endl;
        cout << y % x << endl;
        cout << ((x>y) || (y<z) && (z != 0)) << endl;
        cout << x++ << endl;
        cout << x + ++z << endl;
        return 0;
}
