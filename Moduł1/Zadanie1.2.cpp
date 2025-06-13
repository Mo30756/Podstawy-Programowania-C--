#include <iostream>
#include <clocale>
int main() {
    std::setlocale(LC_ALL, "");
}
int main() {
    int a = 7;
    int b = 9;

    std::cout << "Liczba a: " << a << std::endl;
    std::cout << "Liczba b: " << b << std::endl;
    std::cout << "Suma: "      << (a + b) << std::endl;
    std::cout << "Ró¿nica: "   << (a - b) << std::endl;
    std::cout << "Iloczyn: "   << (a * b) << std::endl;
    return 0;
}
