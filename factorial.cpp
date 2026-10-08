// Realizar un factorial
#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "El factorial es: " << factorial;

    return 0;
}