#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x1, x2;
    cin >> a >> b >> c;


    double discriminant = (b * b - 4 * a *c);

    if (discriminant < 0 || a == 0) {
        cout << "no roots" << endl;
    } else if (discriminant == 0) {
        cout << -b / (2 * a) << endl;
    } else {
        x1 = (-b - sqrt(discriminant)) / (2 * a); 
        x2 = (-b + sqrt(discriminant)) / (2 * a);

        if (x1 <= x2) {
            cout << x2 << " " << x1 << endl;
        } else {
            cout << x1 << " " << x2 << endl;
        }
    }


    return 0;
}