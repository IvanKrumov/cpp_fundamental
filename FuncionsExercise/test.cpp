#include <iostream>

using namespace std;


long long Factorial2(long long a) {
    long long fact = 1;
    if(a == 0) {
        fact = 1;
    } else {
        for (int i = 1; i <= a; i++) {
            fact *= i;
        }
    }
    return fact;
}

long long Factorial1(long long b) {
    long long fact = 1;
    if (b == 0) {
        fact = 1;
    } else {
        for (int i = 1; i <= b; i++) {
            fact *= i;
        }
    }
    return fact;
}


int main() {
    int counter;
    int counter2;

    cin >> counter >> counter2;

    long long fact2 = Factorial2(counter);
    long long fact1 = Factorial1(counter2);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << fact2 / fact1 << endl;

    


}