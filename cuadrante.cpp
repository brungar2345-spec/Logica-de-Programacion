// Realizar un programa en c++ que permita ubicar al cuadrante de un plano cartesiano
#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    if(x>0 && y>0)
    {
        cout << "Cuadrante I" << endl;
    }
    else if(x<0 && y>0)
    {
        cout << "Cuadrante II" << endl;
    }
    else if(x<0 && y<0)
    {
        cout << "Cuadrante III" << endl;
    }
    else if(x>0 && y<0)
    {
        cout << "Cuadrante IV" << endl;
    }
    else
    {
        cout << "El punto esta sobre un eje" << endl;
    }
    return 0;
}