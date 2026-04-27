#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Enter a number: " << endl;
    cin >> number;

    if (number == 0){
        cout << "Your number is zero." << endl;
    }else if(number < 0){
        cout << "Your number is negative." << endl;
    }else{
        cout << "Your number is positive." << endl;
    }

    return 0;
}