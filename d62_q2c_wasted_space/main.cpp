// d62_q2c_wasted_space : Wasted Space
#include <iostream>

int main() {
    int n;
    int cap = 1;
    std::cin >> n;
    while (cap < n) {
        cap *= 2;
    }
    std::cout << cap - n;
    return 0;
}
