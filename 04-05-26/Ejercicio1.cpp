#include <iostream>

using namespace std;

int main()
{
    int res, n;
    char v; // únicamente puede guardar 1 caracter

    cout << "hola, podrias ingresar un caracter: " << endl;
    cin >> v;

    // res = n % 2;
    // cout << n << endl;

    switch (v)
    {
    case 'L':
        cout << v << " Lunes\n";
        break;
    case 'M':
        cout << v << " Martes\n";
        break;
    case 'm':
        cout << v << " Miercoles\n";
        break;
    case 'J':
        cout << v << " Jueves\n";
        break;
    case 'V':
        cout << v << " Viernes\n";
        break;
    case 'S':
        cout << v << " Sabado\n";
        break;
    case 'D':
        cout << v << " Domingo\n";
        break;
    default:
        cout << "Datos incorrectos" << endl;
        break;
    }

    return 0;
}