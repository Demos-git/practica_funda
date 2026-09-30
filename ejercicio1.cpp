#include <iostream>
using namespace std;
int numero;

int main()
{
    cout << "Ingrese un numero:  ";
    cin >> numero;
    if (numero > 0)
    {
        cout << "El numero es positivo";
    }
    else if (numero < 0)
    {
        cout << "El numero es negativo";
    }
    else
    {
        cout << "El numero es cero";
    }

    return 0;
}