#include <iostream>

bool isMagical(unsigned num){
    unsigned squared_num = num * num;
    unsigned power = 10;
    while(true){
        if(squared_num % power == num){
            return true;
        }else if(squared_num % power > num){
            return false;
        }else{
            power *= 10;
        }
    }
}

int main() {
    unsigned n;
    std::cin >> n;
    std::cout << std::boolalpha << isMagical(n) << std::endl;
    return 0;
}