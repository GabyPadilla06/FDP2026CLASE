#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "Podrias ingresar un numero que sera tu limite: ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        cout << i << " ";
    }
    
    cout << endl;

    return 0;
}