// Leer un numero entero de dos digitos y determinar si los dos digitos son iguales
#include <iostream>
using namespace std;
int main()
{
    int num, dig1, dig2;
    cout << " Digite un numero entero: ";
    cin >> num;
    if(num<0)
    {
        num = num * -1;
    }
    if(num>=10 && num<=99)
    {
        dig1 = num/10;
        dig2 = num % 10;
        if(dig1 == dig2)
        {
            cout << "Los dos digitos son iguales ";
        }
    }
    else
    {
        cout << " Los dos digitos No son iguales";
    }
    return 0;
}