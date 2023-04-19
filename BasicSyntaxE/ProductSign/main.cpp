#include <iostream>

using namespace std;

int main() {

    int negCoute = 0;
    int zeroCount = 0;

    for(int i = 0; i < 3; i++) {
        double number;
        cin >> number;

        if (number < 0) {
            negCoute ++;
        } else if (number == 0) {
            zeroCount ++;
        }
    }

    if (negCoute % 2 == 0 || negCoute == 0 || zeroCount > 0) {
        cout << "+" << endl;
    } else {
        cout << "-" << endl;
    }

    return 0;
}