#include <iostream>

using namespace std;

void Area(int a, int b) {
    int area = a * b;
    cout << area << endl;
}

int main() {
    int side_a, side_b;
    cin >> side_a >> side_b;

    Area(side_a, side_b);
    return 0;
}