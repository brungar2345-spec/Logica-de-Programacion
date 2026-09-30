// Leer un numero entero menor que 20 y determinar si es primo 
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Digite un numero entero:";
    cin >> num;
    if(num < 20)
    {
        if(num == 2 || num == 3 || num == 5 || num == 7 || 
           num == 11 || num == 13 || num == 17 || num == 19)
        {
            cout << "El numero es primo y menor que 20";
        }
    }
    else 
    {
        cout << "El numero NO es menor que 20";
    }
    return 0;
}