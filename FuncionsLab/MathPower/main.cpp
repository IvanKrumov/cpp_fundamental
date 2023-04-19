#include <iostream>
#include <cmath>

using namespace std;

// void Power(int a, int b) {
//     int power = pow(a, b);
//     cout << power << endl;
// }

// int main() {
//     int side_a, side_b;
//     cin >> side_a >> side_b;

//     Power(side_a, side_b);
//     return 0;
// }



// From num to words
void Thousands(int num) {
    static int thousandsD = num / 1000;
    string thousandsW;

    if (thousandsD == 1) {
        thousandsW = "one";
    }
    cout << thousandsW << " thousand" <<endl;
    
}

void Hundreds(int num) {
    static int thousandsD = num / 100;
    string thousandsW;

    if (thousandsD == 1) {
        thousandsW = "one";
    }
    cout << thousandsW << " hundred" <<endl;
    
}



int main() {
    int number, thousands, hundreds, tens, ones;
    cin >> number;

    if(number >= 1000) {
        Thousands(number);
    } else if (number >= 100 && number < 1000) {
        Hundreds(number);
    }

    return 0;
}