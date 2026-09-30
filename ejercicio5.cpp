#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n, n1;
    SetConsoleOutputCP(CP_UTF8);

    cout << "¡Bienvenido!, ingrese lo que desea ordenar (1-4)" << endl;
    cout << "1.Desayuno $2.50" << endl;
    cout << "2.Almuerzo $3.50" << endl;
    cout << "3.Cena $3.00" << endl;
    cout << "4.Tipico $2.50" << endl;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "¿cuantos desea?: ";
        cin >> n1;
        cout << "Su total sería de: $" << n1* 2.5 << endl;
        break;
    case 2:
        cout << "¿cuantos desea?: ";
        cin >> n1;
        cout << "Su total sería de: $" << n1 * 3.5 << endl;
        break;
    case 3:
        cout << "¿cuantos desea?: ";
        cin >> n1;
        cout << "Su total sería de: $" << n1 * 3 << endl;
        break;
    case 4:
        cout << "¿cuantos desea?: ";
        cin >> n1;
        cout << "Su total sería de: $" << n1 * 2.5 << endl;
        break;
    default:
        cout << "Opción no valida";
        break;
    }

    return 0;
}