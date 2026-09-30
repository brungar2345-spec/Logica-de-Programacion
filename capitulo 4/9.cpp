// Leer un numero entero de 2 digitos y determinar si un digito es multiplo del otro
#include <iostream>
using namespace std;
int main()
{
    int num, dig1, dig2;
    cout << "Digite un numero entero:";
    cin >> num;
    if(num<0)
    {
        num = num * -1;
    }
    if(num>=10 && num<=99)
    {
        dig1 = num/10;
        dig2 = num % 10;
        if(dig1 % dig2 == 0 || dig2 % dig1 == 0)
        {
            cout << "Un digito es multiplo del otro";
        }
    }
    else 
    {
        cout << "Un digito NO es multiplo del otro ";
    }
    return 0;
}