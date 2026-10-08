// realizar un programa q permita leer las notas de n estduaintes, visualizar cuantos has aprobado y desaprobado
#include <iostream>
using namespace std;
int main()
{
    int n, aprobados = 0, desaprobados = 0;
    float nota;

    cout << "Ingrese el número de estudiantes: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> nota;

        if (nota >= 11 && nota <= 20)
        {
            aprobados++;
        }
        else 
        {
         desaprobados++;
        }

    }

    cout << "Estudiantes aprobados: " << aprobados << endl;
    cout << "Estudiantes desaprobados: " << desaprobados << endl;

    return 0;
}