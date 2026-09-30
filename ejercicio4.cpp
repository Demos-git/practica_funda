#include <iostream>
#include <windows.h>
using namespace std;

float n1, n2;
int opcion;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "¿Que deseas realizar?" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "El resultado es: " << n1 + n2 << endl;
        break;
    case 2:
        cout << "El resultado es: " << n1 - n2 << endl;
        break;
    case 3:
        cout << "El resultado es: " << n1 * n2 << endl;
        break;
    case 4:
        cout << "El resultado es: " << n1 / n2 << endl;
        break;
    default:
        cout << "Opcion no valida" << endl;
        break;
    }

    return 0;
}