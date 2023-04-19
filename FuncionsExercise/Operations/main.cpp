#include <iostream>

using namespace std;


void opDevision(double a, double b){
    cout << a / b;
}

void Multi(int a, int b) {
    cout << a * b;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    char operation;
    cin >> operation;

    if (num2 == 0 && operation == '/') {
        cout <<  "Can't divide by zero." << endl;
        return 1;
    }

    if (operation == '/') {
        opDevision(num1, num2);
    } else if (operation == '*') {
        Multi(num1, num2);
    }
}