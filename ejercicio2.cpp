#include <iostream>
#include <windows.h>
using namespace std;

int edad;
int main () {
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18){
        cout << "Eres mayor de edad.";
    } else {
        cout << "Eres menor de edad.";
    }

    return 0;
}