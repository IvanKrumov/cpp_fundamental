// #include <iostream>

// using namespace std;

// int main() {
    

//     return 0;
// }

// #include <iostream>

// int result(void) { 
//     int i;  
//     std::cin >> i; 
//     return i;
// }

// int main() {
//     int arrInt[5];// sizeof(int) * 5 ==> amount of memory ==> 20 bytes 
//     char arrChar[result()]; // sizeof(char) * 10 ==> 10 bytes

//     std::cout << "sizeof array ints: " << sizeof(arrInt) << std::endl;
//     std::cout << "sizeof array chars: " << sizeof(arrChar) << std::endl;

//     return 0;
// }


#include<iostream>

int main() {
    if (__cplusplus == 202101L) std::cout << "C++23";
    else if (__cplusplus == 202002L) std::cout << "C++20";
    else if (__cplusplus == 201703L) std::cout << "C++17";
    else if (__cplusplus == 201402L) std::cout << "C++14";
    else if (__cplusplus == 201103L) std::cout << "C++11";
    else if (__cplusplus == 199711L) std::cout << "C++98";
    else std::cout << "pre-standard C++." << __cplusplus;
    std::cout << "\n";
}