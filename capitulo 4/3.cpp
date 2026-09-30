// Leer un  Numero entero y determinar si es negativo 
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Ingrese un numero entero:" << endl;
    cin >> num;
    if(num < 0)
    {
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero no es negativo" << endl;
    }
    return 0;
}