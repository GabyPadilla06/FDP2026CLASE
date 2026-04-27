#include <iostream>
#include <cmath> // Para utilizar la función pow

using namespace std;

int main(){

    float radio, pi= 3.141516;
    int areaCirculo;

    cout << "Bienvenido a la calculadora del area del circulo" << endl;
    cout << "Ingrese el radio del circulo: " << endl;
    cin >> radio; 

    areaCirculo = pi * (pow(radio, 2));
    cout << areaCirculo << endl;

    if(areaCirculo % 2 == 0){
        cout << "El area calculada es: " << areaCirculo << " por lo tanto es par" << endl;
    }else{
        cout << "El area calculada es: " << areaCirculo << " por lo tanto es impar" << endl;
    }
    
    return 0;
}