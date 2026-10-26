#include <iostream>
using namespace std;
int main ()
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
        int Num=a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d;
        if (Num == N)
        {
            cout << "El numero " << N << " es un numero de Armstrong" << endl;
        }
        else
        {
            cout << "El numero " << N << " NO es un numero de Armstrong" << endl;
        }
    }
    return 0;
}