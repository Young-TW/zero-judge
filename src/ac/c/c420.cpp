#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            std::cout << "_";
        }
        for (int j = n - i; j <= n; j++) {
            std::cout << "*";
        }
        for (int j = n - i; j < n; j++) {
            std::cout << "*";
        }
        for (int j = n - 1; j > i; j--) {
            std::cout << "_";
        }
        std::cout << std::endl;
    }
    return 0;
}