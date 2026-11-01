#include <iostream>
using namespace std;
int main ()
{
    int A[3] = {10,20,30};
    int i,suma=0;
    cout << "Ingrese 3 números: ";
    for (i=0; i<3; i++)
    {
        cin >> A[i];
        suma += A[i];
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}