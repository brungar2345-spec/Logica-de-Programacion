// Leer un numero  entero de 2 digitos y calcular  la suma de ellos 
#include <iostream>
using namespace std;

int main()
{
    int num, dig1, dig2, sumaD;

    cout << "Digite un numero entero: ";
    cin >> num;

    if (num < 0)
    {
        num = num * -1;
    }

    if (num >= 10 && num <= 99)
    {
        dig1 = num / 10;
        dig2 = num % 10;
        sumaD = dig1 + dig2;

        cout << "La suma de los digitos es " << sumaD;
    }
    else
    {
        cout << "El numero no es de dos digitos";
    }

    return 0;
}