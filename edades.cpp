// Etapas de la Vida
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(x>=0 && x<=3)
    {
        cout << "Eres un Bebe" << endl;
    }
    else if(x>=4 && x<=14)
    {
        cout << "Eres un Niño" << endl;
    }
    else if(x>=15 && x<=18)
    {
        cout << "Eres un Joven" << endl;
    }
    else if(x>=19 && x<=65)
    {
        cout << "Eres un Adulto" << endl;
    }
    else if(x>65)
    {
        cout << "Eres un Anciano" << endl;
    }
    else 
    {
        cout << "Edad no valida " << endl;
    }
    return 0;
}