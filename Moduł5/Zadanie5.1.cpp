#include <iostream>

bool IsEven(int n) {
    return n % 2 == 0;
}

int main() {
    int x;
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> x;

    if (IsEven(x))
        std::cout << "Liczba " << x << " jest parzysta.\n";
    else
        std::cout << "Liczba " << x << " jest nieparzysta.\n";

    return 0;
}
