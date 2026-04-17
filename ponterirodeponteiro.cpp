#include <iostream>
#include <cstdlib>
using namespace std;
int main(){ double x = 90.87, *y, **z;
y = &x;
z = &y;
cout << "Valor de x: " << *y << endl;
cout << "Endereço de x: " << y << endl;
cout << "Endereço de y: " << z << endl;
cout << "Valor de y: " << *z << endl;
cout << "Novamente o valor de x: " << **z << endl;

return 0;
}