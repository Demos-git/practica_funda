#include <iostream>
#include <windows.h>
using namespace std;


float C, F = C * 1.8 + 32;
int main()
{
SetConsoleOutputCP(CP_UTF8);

    cout << "ingrese su temperatura en °C:  ";
    cin >> C;
    cout << "Temperatura en °F: " << F << "°" << endl;

    if (F > 80.6)
    {
        cout << "Alto nivel de temperatura";
    }
    else if (F < 68)
    {
        cout << "Bajo nivel de temperatura";
    }
    else if (F < 80.6 && F > 68)
    {
        cout << "Nivel de Temperatura agradable: " << F << "°";
    }

    return 0;
}