#include <iostream>

int main() {
    unsigned a, max_sum = 0, curr = 0, prev = 0;
    std::cin >> a;
    if(a != 0){
        prev = a;
        curr = a;
        max_sum = a;
        while(std::cin >> a){
            if(a == 0){
                if(curr > max_sum){
                    max_sum = curr;
                }
                break;
            }
            if(a > prev){
                curr += a;
                prev = a;
            } else {
                if(curr > max_sum){
                    max_sum = curr;
                }
                curr = a;
                prev = a;
            }
        }
    }
   

 
    std::cout << max_sum << std::endl;
    return 0;
}