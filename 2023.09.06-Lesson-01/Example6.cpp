#include <iostream>

int main() {
    int a = 0; 
    int b = 0;
    std::cin >> a >> b;
    std::cout << ((a / b) * a + (b / a) * b) / (b / a + a / b) << std::endl;
    return 0;
}