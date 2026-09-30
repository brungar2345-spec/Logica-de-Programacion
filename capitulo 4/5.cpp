// Leer un numero entero de 2 digitos y decir si ambos digitos son pares
#include <iostream>
using namespace std;
int main()
{
    int num, dig1, dig2;
    cout << "Digite un numero entero";
    cin >> num;
    if(num < 0)
    {
        num = num * -1;
    }
    if(num >= 10 && num <= 99)
    {
        dig1 = num/10;
        dig2 = num % 10;
        if(dig1 % 2 == 0 && dig2 % 2 == 0)
        {
            cout << "Los dos digitos son pares";
        }
        else 
        {
            cout << "Los dos digitos no son pares";
        }
    }
    else 
    {
        cout << "El digito no es de dos digitos";
    }
    return 0;
}