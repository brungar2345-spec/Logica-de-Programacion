#include <iostream>
using namespace std;
int main()
{
    int n , num;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int A[n];
    for( int i=0; i<n ; i++)
    {
        cin >> num;
        A[i] = num;
    }
    for( int i=0; i<n ; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}