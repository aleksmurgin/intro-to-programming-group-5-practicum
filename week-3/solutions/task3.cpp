#include <iostream>

int main() {
    unsigned steps = 0, max_val = 0;
    unsigned n;
    std::cin >> n;
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
        if(n > max_val){
            max_val = n;
        }
    }
    std::cout << "Max value reached: "<< max_val << " Steps: " <<steps << std::endl;

    return 0;
}