#include <iostream>

using namespace std;

void PrintNumbers(int start, int end) {
    for(int i = start; i <= end; i++) {
        cout << i << endl;
    }
}

int main() {
    PrintNumbers(5, 30);
    return 0;
}