// Leer un Numero entero y determinar si termina en 4
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Ingrese un Numero:";
    cin >> num;

    if(num % 10 == 4)
    {
        cout << "El Numero termina en 4" << endl;
    }
    else
    {
        cout << "El numero no termina en 4" << endl;
    }
    return 0;
}