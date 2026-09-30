// Leer un numero entero de 2 digitos y decir si los digitos son primos
#include <iostream>
using namespace std;

int main()
{
    int num, dig1, dig2;

    cout << "Digite un numero entero: ";
    cin >> num;

    if (num >= 10 && num <= 99)
    {
        dig1 = num / 10;
        dig2 = num % 10;

        if ((dig1 == 2 || dig1 == 3 || dig1 == 5 || dig1 == 7) &&
            (dig2 == 2 || dig2 == 3 || dig2 == 5 || dig2 == 7))
        {
            cout << "Los dos digitos son primos";
        }
        else
        {
            cout << "Uno de los dos digitos o ninguno de los dos es primo";
        }
    }
    else
    {
        cout << "El numero no es de dos digitos";
    }

    return 0;
}