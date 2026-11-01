#include <iostream>
using namespace std;
int main ()
{
    int n, suma=0;
    cout << "Ingrese un numero;";
    cin >> n;
    int A[n];
    for( int i=0; i<n ; i++)
    {
        A[i]=i+1;
        suma += A[i];
    }
    cout << suma << endl;
}