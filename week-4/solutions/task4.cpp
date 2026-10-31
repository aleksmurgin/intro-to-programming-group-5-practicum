#include <iostream>

unsigned reverseNumber(unsigned num) {
    unsigned reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(unsigned num) {
    if(num % 10 == 0 && num != 0) {
        return false; 
    }
    return num == reverseNumber(num);
}

unsigned countPalindromes(unsigned a, unsigned b) {
    unsigned count = 0;
    for (unsigned i = a; i <= b; ++i) {
        if (isPalindrome(i)) {
            ++count;
        }
    }
    return count;
}

int main() {
    unsigned a, b;
    std::cin >> a >> b;
    std::cout << countPalindromes(a, b) << std::endl;
    return 0;
}