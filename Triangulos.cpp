// Tipos de Triangulos
#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if(x==y && y==z)
    {
        cout << "Equilatero" << endl;
    }
    else if(x==y || y==z || x==z)
    {
        cout << "Isosceles" << endl;
    }
    else
    {
        cout << "Escaleno" << endl;
    }

    return 0;
}