#include <iostream>

bool isPerfect(unsigned num){
    unsigned int sum = 0;
    for(unsigned i = 1; i <= num/2; ++i){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    unsigned n;
    std::cin >> n;
    std::cout << std::boolalpha << isPerfect(n) << std::endl;
    return 0;
}