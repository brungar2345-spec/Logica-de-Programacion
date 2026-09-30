// Leer un numero entero de 2 digitos y decir si es primo y negativo
#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Digite un numero entero:";
  cin >> num;
  if(num == -2 || num == -3 || num == -5 || num == -7 || 
     num == -11 || num == -13 || num == -17 || num == -19)
   {
    cout << "El numero es primo y negativo";
   }
   else
   {
    cout << "El numero no es primo o no es negativo";
   }
   return 0;
}