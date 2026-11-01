#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Ingrese el digito:";
    cin >> n;
    int A[n];
    for( int i=0; i<n ; i++)
    {
        A[i]=i+1;
    }
    for( int i=0 ; i<n ; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}