#include <iostream>
#include <cmath> // Para utilizar la función pow

using namespace std;

int main()
{

    int y, x;

    // Solicite el usuario un número
    cout << "Please enter a number: " << endl;
    cin >> y;

    // Calcule x = y elevado a la y
    x = pow(y, y);

    // Determina si x es par o impar

    if (x % 2 == 0)
    {
        cout << "The number: " << x << " is even." << endl;
    }
    else
    {
        cout << "The number: " << x << " is odd." << endl;
    }

    if (y < 0)
    {
        cout << "The number: " << y << " is negative" << endl;
    }
    else
    {
        cout << "The number: " << y << " is positive" << endl;
    }

    return 0;
}