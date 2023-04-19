#include <iostream>

using namespace std;

int getMax(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    getMax(n1, n2);

    return 0;
}