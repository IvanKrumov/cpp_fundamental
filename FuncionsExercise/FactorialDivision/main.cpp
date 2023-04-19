#include <iostream>

using namespace std;



int Fact1(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int Fact2(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}



int main() {
    int num1, num2;
    cin >> num1, num2;

    int fact1 = Fact1(num1);
    int fact2 = Fact2(num2);
    int devision = 0;
    devision = fact1 / fact2;

    cout << devision << endl;
    return 0;
}