#include <iostream>
using namespace std;
int main()
{
    int n, num, suma = 0;
    cout << "Ingrese el tamaño del arreglo:";
    cin >> n;
    int A[n];
    for( int i=0; i<n ; i++)
    {
        cin >> num;
        A[i] = num;
    }
    for( int i=0 ; i<n ; i++)
    {
        suma = suma + A[i];
    }
    cout << "La suma de los elementos del arreglo es: " << suma << endl;
    return 0;
}