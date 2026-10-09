#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

float calcularFi(float ipcr, float ipci)
{
    return ipcr / ipci;
}

float calcularSBR(int t, int w, float ibcC, float ibcD, int n, float ipcr, float ipci)
{
    float fi = calcularFi(ipcr, ipci);
    float sumaColones = 0;
    float sumaDolares = 0;
    int k;

    k = 1;
    while (k <= t - w)
    {
        sumaColones = sumaColones + ibcC * fi;
        k++;
    }

    k = t - w + 1;
    while (k <= t)
    {
        sumaDolares = sumaDolares + ibcD * fi;
        k++;
    }

    return (sumaColones / 8.75 + sumaDolares) / n;
}

float calcularIef(float i)
{
    return pow(1 + i, 12) - 1;
}

int main()
{
    float pmes1, pmes2, pmes3;
    int opcion = 0;

    int t, w, n, aniosCotizados, m;
    float ibcC, ibcD, ipcr, ipci, sbr, factorInc;

    float ciap, i, ief, A, B;
    int mp;

    SetConsoleOutputCP(CP_UTF8);

    while (opcion != 4)
    {
        cout << endl;
        cout << "Que desea realizar?" << endl;
        cout << "1. Pensión para los optados" << endl;
        cout << "2. Pensión para los afiliados del Sistema Público de Pensiones" << endl;
        cout << "3. Pensión de los afiliados al Sistema privado (AFP)" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Pensión para los optados: " << endl;

            cout << "t, w, n: ";
            cin >> t >> w >> n;
            cout << "IBC colones, IBC dólares: ";
            cin >> ibcC >> ibcD;
            cout << "IPCr, IPCi: ";
            cin >> ipcr >> ipci;
            cout << "Años cotizados: ";
            cin >> aniosCotizados;

            sbr = calcularSBR(t, w, ibcC, ibcD, n, ipcr, ipci);

            m = aniosCotizados - 10;
            factorInc = pow(1 + 0.01, m);

            if (0.35 * factorInc > 0.55)
            {
                factorInc = 0.55 / 0.35;
            }

            pmes1 = 0.35 * sbr * factorInc;

            if (pmes1 > 2000)
            {
                pmes1 = 2000;
            }

            cout << "Pensión mensual: $" << pmes1 << endl;
            break;

        case 2:
            cout << "Pensión para los afiliados del Sistema Público de Pensiones: " << endl;

            cout << "t, w, n: ";
            cin >> t >> w >> n;
            cout << "IBC colones, IBC dólares: ";
            cin >> ibcC >> ibcD;
            cout << "IPCr, IPCi: ";
            cin >> ipcr >> ipci;
            cout << "Años cotizados: ";
            cin >> aniosCotizados;

            sbr = calcularSBR(t, w, ibcC, ibcD, n, ipcr, ipci);

            m = aniosCotizados - 3;
            factorInc = pow(1 + 0.0175, m);

            pmes2 = 0.30 * sbr * factorInc;

            cout << "Pensión mensual: $" << pmes2 << endl;
            break;

        case 3:
            cout << "Pensión de los afiliados al Sistema privado (AFP): " << endl;

            cout << "CIAP: ";
            cin >> ciap;
            cout << "Tasa i (en decimal, 0.083% = 0.00083): ";
            cin >> i;
            cout << "Mes de solicitud (1-12): ";
            cin >> mp;

            ief = calcularIef(i);

            A = (pow(1 + i, 240) - 1) / (i * pow(1 + i, 240));
            B = 0.5 * (pow(1 + ief, 20) - 1) * pow(1 + i, mp - 1) / (ief * pow(1 + ief, 20));

            pmes3 = ciap / (A + B);

            cout << "Pensión mensual: $" << pmes3 << endl;
            break;

        case 4:
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opción inválida, intente de nuevo." << endl;
            break;
        }
    }

    return 0;
}