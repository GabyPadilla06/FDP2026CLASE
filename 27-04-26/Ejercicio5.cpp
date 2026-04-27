#include <iostream>

using namespace std;

int main(){
    int temperature;

    cout << "Ingresa la temperatura del agua: " << endl;
    cin >> temperature;

    if (temperature >= 25 && temperature <= 40){
        cout << "La temperatura del agua es templada" << endl;
    }else if(temperature >= 45 && temperature <= 60){
        cout << "La temperatura del agua es caliente" << endl;
    }else{
        cout << "La temperatura del agua es fria" << endl;
    }

    return 0;
}