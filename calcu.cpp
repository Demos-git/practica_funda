#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

float pmes1(float pension)
{
}

float pmes2()
{
}

float pmes3()
{
}

int main()
{

    float pension, pmes1, pmes2, pmes3;
    int opcion;

    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingrese su pensión: ";
    cin >> pension;

    cout << "Que desea realizar?" << endl;
    cout << "1. Pensión para los adoptados" << endl;
    cout << "2. Pensión para los afiliados del Sistema Público de Pensiones" << endl;
    cout << "3. Pensión de los afiliados al Sistema privado (AFP)" << endl;
    cout << "4. Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:

        cout << "Pensión para los adoptados: " << endl;

        break;
    case 2:
        cout << "Pensión para los afiliados del Sistema Público de Pensiones: " << endl;

        break;
    case 3:
        cout << "Pensión de los afiliados al Sistema privado (AFP): " << endl;

        break;
    case 4:

        break;

    default:
        cout << "Datos erroneos";
        break;
    }

    return 0;
}