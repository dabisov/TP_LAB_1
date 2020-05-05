#include <iostream>
#include <string>
#include "gcd_iterative.h"
using namespace std;

unsigned long long getValue(string message){
    unsigned long long value;
    cout << message;
    while (!(cin >> value)){
        cerr << "Ошибка. Введите заново: ";
        cin.clear();
        fflush(stdin);
    }
    return value;
}

int main(void){
    cout << "НОД: " << gcd_iterative(getValue("Введите первое число: "), getValue("Введите второе число: ")) << endl;
}
