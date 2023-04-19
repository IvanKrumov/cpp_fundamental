#include <iostream>
#include <climits>

using namespace std;


int SmallestNum(int a) {
    static int minNum = INT_MAX;
    static int counterNums = 0;

    counterNums++;

    if (a < minNum) {
        minNum = a;
    }
    if(counterNums == 3) {
        cout << minNum << endl;
    }  
}

int main() {
    for(int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        SmallestNum(num);
    }
}