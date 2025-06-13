#include <iostream>
int main() {
    int N;
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    std::cout << std::endl;
    for(int a = 1; a <= N; ++a) {
        for(int b = 1; b <= N; ++b) {
            std::cout << a << " * " << b << " = " << (a * b) << "\n";
        }
        std::cout << "\n";
    }
    return 0;
}
