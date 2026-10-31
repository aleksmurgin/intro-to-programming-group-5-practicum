#include <iostream>

unsigned digitsSum(unsigned num) {
    unsigned sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool areFriends(unsigned a, unsigned b) {
    return (a % digitsSum(b) == 0) && (b % digitsSum(a) == 0);
}

int main() {
    unsigned a, b;
    std::cin >> a >> b;
    std::cout << std::boolalpha << areFriends(a, b) << std::endl;
    return 0;
}