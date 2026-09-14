// Realizar un programa que pueda simular el and y or
#include <iostream>
using namespace std;

int main()
{
    bool a, b;

    cout << "Ingresa 0 o 1 para A: ";
    cin >> a;

    cout << "Ingresa 0 o 1 para B: ";
    cin >> b;

    cout << "and: " << (a && b) << endl;
    cout << "or: " << (a || b) << endl;

    return 0;
}