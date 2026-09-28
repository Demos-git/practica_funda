#include <iostream>
#include <windows.h>
using namespace std;

float y, z, trabajo;

int main()
{

    SetConsoleOutputCP(CP_UTF8);

    cout << "¡Bienvenid@!, porfavor ingrese su fuerza en Newton: ";
    cin >> y;
    cout << "Ingrese la distancia recorrida en metros: ";
    cin >> z;

    if (z > 0 && y > 0)
    {
        trabajo = y * z;
        cout << "¿Cuánto trabajo realizó el operario?" << endl;
        cout << "Realizó " << trabajo << " joules de trabajo" << endl;
    }
    else
    {

        cout << "datos erroneos >:( " << endl;
    }

    return 0;
}