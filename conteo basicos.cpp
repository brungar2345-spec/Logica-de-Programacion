// conteos basicos
#include <iostream>
using namespace std;
int main()
{
    int inicio,fin ;
    cout << "Ingrese el valor de inicio: ";
    cin >> inicio;
    cout << "Ingrese el valor de fin: ";
    cin >> fin;
    for(int i=inicio; i<=fin; i++)
    {
        cout << i; 
    }
    return 0;
}