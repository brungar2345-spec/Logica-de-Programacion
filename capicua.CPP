#include <iostream>
using namespace std;
int main()
{
    int N,a,b,c,d;
    cout << "Ingrese un numero de 4 cifras:";
    cin >> N;
    if(N>=1000 && N<=9999)
    {
        a=N/1000;
        b=(N%1000)/100;
        c=(N%100)/10;
        d=N%10;
        if (a == d && b == c)
        {
            cout << "El numero " << N << " es capicua" << endl;
        }
        else
        {
            cout << "El numero " << N << " NO es capicua" << endl;
        }
    }
    else
    {
        cout << "El numero ingresado no tiene 4 cifras" << endl;
    }
    return 0;
}