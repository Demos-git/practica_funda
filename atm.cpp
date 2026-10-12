#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    SetConsoleOutputCP(CP_UTF8);

    int opcion;
    float retiro, SaldoR = 1000, Abono, AbonoI;
    float SaldoI = 1000.0;

    do
    {
        cout << "Bienvenido, su saldo inicial es de " << SaldoR << endl;
        cout << "¿Que desea realizar el dia de hoy?" << endl;
        cout << "1. Retirar" << endl;
        cout << "2. Abonar" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            if (retiro < 0 || retiro < SaldoI)
            {
                cout << "Cuanto desea retirar: ";
                cin >> retiro;
                cout << "Retiro exitoso" << endl;
                SaldoR = SaldoI - retiro;
            }
            else
            {
                cout << "Datos invalidos" << endl;
            }

            break;
        case 2:
            if (Abono >= 0)
            {
                cout << "Cuanto desea abonar: ";
                cin >> Abono;
                cout << "Abono exitoso" << endl;
                SaldoR = SaldoR + Abono;
            }
            else
            {
                cout << "No se permiten valores negativos" << endl;
            }

            break;
        case 3:
            cout << "Saliendo, Gracias por preferirnos......";
            break;

        default:
            cout << "Invalido" << endl;
            break;
        }
    } while (opcion != 4);

    return 0;
}