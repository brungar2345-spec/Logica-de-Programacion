#include <iostream>
using namespace std;
int main()
{
    int num1, num2, res;
    cout << "Ingrese dos digitos:";
    res=0;
    
    cin>>num1>>num2;
    
    for (int i=1; i<=num2; i++)
    {
        res=res+num1;
    }
    
    cout<<res;
    
    return 0;
}