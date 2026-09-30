// Leer un Numero entero y determinar si tiene 3 digitos 
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Ingrese un Numero:";
    cin >> num;
    if (num >= 100 && num <= 999 || num >= -999 && num <= -100)
    {
        cout << "El numero tiene 3 digitos" << endl;
    }
    else
    {
        cout << "El numero no tiene 3 digitos" << endl;
    }

    return 0;
}